#pragma once
namespace View {
	using namespace System;
	using namespace System::Drawing;
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
		property FPoint ^Location{
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

	};
	//图形样式
	public ref class Style {
	private:
		Color bgColor = Color::Black;
		Color lineColor = Color::White;
		Color axisColor = Color::Blue;
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
	};

}