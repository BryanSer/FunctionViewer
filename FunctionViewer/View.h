#pragma once
#include <cliext/stack>
#include <cliext/list>
#include <cliext/map>
namespace View {
	using namespace cliext;
	using namespace System;
	using namespace System::Drawing;
	using namespace System::Collections;
	using namespace System::Text::RegularExpressions;
	public enum class CoordinateType {
		RightAngle, Polar
	};

	//直角坐标点
	public ref class FPoint {
	private:
		float x, y;
	public:
		FPoint() {
			x = 0;
			y = 0;
		}
		FPoint(float x, float y) {
			this->x = x;
			this->y = y;
		}
		FPoint(Point ^p) {
			x = p->X;
			y = p->Y;
		}
		FPoint(Point &p) {
			x = p.X;
			y = p.Y;
		}
		//直角坐标系中X的位置
		property float Location_X {
			float get() {
				return this->x;
			}
			void set(float value) {
				this->x = value;
			}
		}
		//直角坐标系中Y的位置
		property float Location_Y {
			float get() {
				return this->y;
			}
			void set(float value) {
				this->y = value;
			}
		}
	};

	//用来计算坐标系的类
	public ref class ViewInfo {
	private:
		FPoint ^ location;
		float zoom = 1.0;
		CoordinateType type;
	public:
		ViewInfo(FPoint ^ loc, CoordinateType type) {
			this->location = loc;
			this->type = type;
		}
		property FPoint ^Location {
			FPoint ^get() {
				return this->location;
			}
			void set(FPoint^ p) {
				this->location = p;
			}
		}

		//表示绘制界面的缩放情况
		//Zomm==1时 表示50像素为1
		property float Zoom {
			float get() {
				return this->zoom;
			}
			void set(float f) {
				this->zoom = f;
			}
		}
		//坐标系类型
		property CoordinateType CType {
			CoordinateType get() {
				return this->type;
			}
		}

		Point ^toPoint(FPoint ^f) {
			float zoom = this->Zoom;
			float x = (-this->Location->Location_X + f->Location_X) * zoom * 50;
			float y = (this->Location->Location_Y - f->Location_Y) * zoom * 50;
			return gcnew Point(x, y);
		}

		FPoint ^toFPoint(Point ^p) {
			float zoom = this->Zoom;
			float x = p->X / (50 * zoom);
			x += this->Location->Location_X;
			float y = p->Y / (50 * zoom);
			y -= this->Location->Location_Y;

			return gcnew FPoint(x, -y);
		}

	};
	//图形样式
	public ref class Style {
	private:
		Color bgColor = Color::White;
		Color lineColor = Color::Black;
		Color axisColor = Color::Blue;
		Color fontColor = Color::Red;
		int width = 1;

	public:
		property Color BackgroundColor {
			Color get() {
				return this->bgColor;
			}
			void set(Color c) {
				this->bgColor = c;
			}
		}
		property Color LineColor {
			Color get() {
				return this->lineColor;
			}
			void set(Color c) {
				this->lineColor = c;
			}
		}
		property Color AxisColor {
			Color get() {
				return this->axisColor;
			}
			void set(Color c) {
				this->axisColor = c;
			}
		}
		property int Width {
			int get() {
				return this->width;
			}
			void set(int w) {
				this->width = w;
			}
		}
		property Color FontColor {
			Color get() {
				return this->fontColor;
			}
			void set(Color c) {
				this->fontColor = c;
			}
		}
	};

	public interface class Function {
		void drawPoint(Graphics ^g);
	};
	public enum Func {
		sin, cos, tan, lg
	};

	//简单表达式计算类
	public ref class Expression {
	private:
		array<int> ^operatPriority = gcnew array<int>(8);
		Regex^ RegEx = gcnew Regex("[0-9.+*/^-]*");

		stack<String ^> ^ postfixStack = gcnew stack<String^>();
		stack<wchar_t> ^opStack = gcnew stack<wchar_t>();
		String ^exper;


		static void insertAtBottom(stack<String^> ^st, String ^data) {
			if ((st->empty())) {
				st->push(data);
			} else {
				String ^temp = st->top();
				st->pop();
				insertAtBottom(st, data);
				st->push(temp);
			}
		}

		static void reverseStack(stack<String^> ^st) {
			if (!(st->empty())) {
				String ^temp = st->top();
				st->pop();
				reverseStack(st);
				insertAtBottom(st, temp);
			}
		}
		static double calculate(String ^firstValue, String ^secondValue, wchar_t currentOp) {
			double result = 0;
			switch (currentOp) {
			case '+':
				result = Double::Parse(firstValue) + Double::Parse(secondValue);
				break;
			case '-':
				result = Double::Parse(firstValue) - Double::Parse(secondValue);
				break;
			case '*':
				result = Double::Parse(firstValue) * Double::Parse(secondValue);
				break;
			case '/':
				result = Double::Parse(firstValue) / Double::Parse(secondValue);
				break;
			case '^':
				result = Math::Pow(Double::Parse(firstValue), Double::Parse(secondValue));
				break;
			}
			return result;
		}

		double calculate(String ^str) {
			stack<String^> ^resultStack = gcnew stack<String^>();
			prepare(str);
			reverseStack(postfixStack);
			String ^firstValue, ^secondValue, ^currentValue;
			while (!postfixStack->empty()) {
				currentValue = postfixStack->top();
				postfixStack->pop();
				if (!isOperator(currentValue[0])) {
					currentValue = currentValue->Replace("~", "-");
					resultStack->push(currentValue);
				} else {
					secondValue = resultStack->top();
					resultStack->pop();
					firstValue = resultStack->top();
					resultStack->pop();

					firstValue = firstValue->Replace("~", "-");
					secondValue = secondValue->Replace("~", "-");
					double tempResult = calculate(firstValue, secondValue, currentValue[0]);
					resultStack->push(tempResult.ToString());
				}
			}
			return Double::Parse(resultStack->top());
		}
		void prepare(String ^str) {
			opStack->push(',');
			array<wchar_t>^ arr = str->ToCharArray();
			int currentIndex = 0;
			int count = 0;
			wchar_t currentOp, peekOp;
			for (int i = 0; i < arr->Length; i++) {
				currentOp = arr[i];
				if (isOperator(currentOp)) {
					if (count > 0) {
						postfixStack->push(gcnew String(arr, currentIndex, count));
					}
					peekOp = opStack->top();
					if (currentOp == ')') {
						while (opStack->top() != '(') {
							wchar_t c = opStack->top();
							opStack->pop();
							postfixStack->push(c.ToString());
						}
						opStack->pop();
					} else {
						while (currentOp != '(' && peekOp != ',' && compare(currentOp, peekOp)) {
							wchar_t top = opStack->top();
							opStack->pop();
							postfixStack->push(top.ToString());
							peekOp = opStack->top();
						}
						opStack->push(currentOp);
					}
					count = 0;
					currentIndex = i + 1;
				} else {
					count++;
				}
			}
			if (count > 1 || (count == 1 && !isOperator(arr[currentIndex]))) {
				postfixStack->push(gcnew String(arr, currentIndex, count));
			}
			while (opStack->top() != ',') {
				wchar_t c = opStack->top();
				opStack->pop();
				postfixStack->push(c.ToString());
			}
		}
	public:
		Expression(String ^s) {
			s = s->Replace(" ", "");
			this->exper = s;
			//0,3,2,1,-1,1,0,2
			this->operatPriority[0] = 0;
			this->operatPriority[1] = 3;
			this->operatPriority[2] = 2;
			this->operatPriority[3] = 1;
			this->operatPriority[4] = -1;
			this->operatPriority[5] = 1;
			this->operatPriority[6] = 0;
			this->operatPriority[7] = 2;
		}
		bool isAvailable() {
			return Expression::RegEx->IsMatch(this->exper);
		}
		static bool isOperator(wchar_t c) {
			return c == '+' || c == '-' || c == '*' || c == '/' || c == '(' || c == ')' || c == '^';
		}

		static String ^transform(String ^str) {
			array<wchar_t>^ arr = str->ToCharArray();
			for (int i = 0; i < arr->Length; i++) {
				if (arr[i] == '-') {
					if (i == 0) {
						arr[i] = '~';
					} else {
						wchar_t c = arr[i - 1];
						if (c == '+' || c == '-' || c == '*' || c == '/' || c == '(' || c == 'E' || c == 'e' || c == '^') {
							arr[i] = '~';
						}
					}
				}
			}
			if (arr[0] == '~' || arr[1] == '(') {
				arr[0] = '-';
				return "0" + gcnew String(arr);
			} else {
				return gcnew String(arr);
			}
		}
		bool compare(wchar_t cur, wchar_t peek) {// 如果是peek优先级高于cur，返回true，默认都是peek优先级要低
			bool result = false;
			if (cur == '^') {
				return false;
			}
			if (peek == '^') {
				return false;
			}
			if (operatPriority[(peek)-40] >= operatPriority[(cur)-40]) {
				result = true;
			}
			return result;
		}

		double calc() {
			bool number = true;
			array<wchar_t>^ chars = this->exper->ToCharArray();
			for (int i = 0; i < chars->Length; i++) {
				wchar_t c = chars[i];
				if (isOperator(c)) {
					number = false;
					break;
				}
			}
			if (number) {
				return Double::Parse(this->exper);
			}
			String ^str = transform(this->exper);
			return calculate(str);
		}
	};


	//从指定的index开始切断字符串到与之封闭的右括号
	static String ^cutSubString(String ^old, int index) {
		int num = 0;
		for (int i = index; i < old->Length; i++) {
			if (old[i] == '(') {
				num++;
			}
			if (old[i] == ')') {
				num--;
				if (num == 0) {
					return gcnew String(old->ToCharArray(), index + 1, i - index - 1);
				}
			}
		}
		return gcnew String(old->ToCharArray(), index + 1, old->Length - index - 1);
	}
	//复杂表达式计算
	//递归计算sin cos tan lg
	//替换常量e pi
	//三角函数计算采用弧度制
	static double calc(String ^str) {
		str = str->Replace(" ", "");
		str = str->ToLower();
		str = str->Replace("sin", "s")->Replace("cos", "c")->Replace("tg", "t")->Replace("tan", "t")->Replace("lg", "l");
		str = str->Replace("e", Math::E.ToString())->Replace("pi", Math::PI.ToString());
		while (str->Contains("s") || str->Contains("c") || str->Contains("t") || str->Contains("l")) {
			for (int i = 0; i < str->Length; i++) {
				wchar_t c = str[i];
				if (c == 's') {
					String ^sub = cutSubString(str, i + 1);
					double tmp = Math::Sin(calc(sub));
					sub = "s(" + sub + ")";
					str = str->Replace(sub, tmp.ToString());
					break;
				}
				if (c == 'c') {
					String ^sub = cutSubString(str, i + 1);
					double tmp = Math::Cos(calc(sub));
					sub = "c(" + sub + ")";
					str = str->Replace(sub, tmp.ToString());
					break;
				}
				if (c == 't') {
					String ^sub = cutSubString(str, i + 1);
					double tmp = Math::Tan(calc(sub));
					sub = "t(" + sub + ")";
					str = str->Replace(sub, tmp.ToString());
					break;
				}
				if (c == 'l') {
					String ^sub = cutSubString(str, i + 1);
					double tmp = Math::Log10(calc(sub));
					sub = "l(" + sub + ")";
					str = str->Replace(sub, tmp.ToString());
					break;
				}
			}
		}
		Expression ^e = gcnew Expression(str);
		return e->calc();
	}

}