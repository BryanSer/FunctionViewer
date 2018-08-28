#pragma once
namespace View {
	using namespace System;
	using namespace System::Drawing;
	public enum class CoordinateType {
		RightAngle, Polar
	};

	//ֱ�������
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
		//ֱ������ϵ��X��λ��
		property float Location_X {
			float get() {
				return this->x;
			}
			void set(float value) {
				this->x = value;
			}
		}
		//ֱ������ϵ��Y��λ��
		property float Location_Y {
			float get() {
				return this->y;
			}
			void set(float value) {
				this->y = value;
			}
		}
	};

	//������������ϵ����
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

		//��ʾ���ƽ�����������
		//Zomm==1ʱ ��ʾ50����Ϊ1
		property float Zoom {
			float get() {
				return this->zoom;
			}
			void set(float f) {
				this->zoom = f;
			}
		}
		//����ϵ����
		property CoordinateType CType {
			CoordinateType get() {
				return this->type;
			}
		}

	};
	//ͼ����ʽ
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