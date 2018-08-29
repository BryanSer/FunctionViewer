#pragma once
#include "View.h"
namespace FunctionViewer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace View;

	/// <summary>
	/// MainUI 摘要
	/// </summary>
	public ref class MainUI : public System::Windows::Forms::Form {
	public:
		MainUI(void) {
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~MainUI() {
			if (components) {
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  开始ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  重置界面ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  退出ToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ToolStripMenuItem^  风格ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  设置背景颜色ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  设置坐标轴颜色ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  设置曲线颜色ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  曲线宽度ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem5;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem6;
	private: System::Windows::Forms::ToolStripMenuItem^  设置字体颜色ToolStripMenuItem;

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void) {
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->开始ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->重置界面ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->退出ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->风格ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->设置背景颜色ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->设置坐标轴颜色ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->设置曲线颜色ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->设置字体颜色ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->曲线宽度ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem5 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem6 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(18, 18);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->开始ToolStripMenuItem,
					this->风格ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(982, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 开始ToolStripMenuItem
			// 
			this->开始ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->重置界面ToolStripMenuItem,
					this->退出ToolStripMenuItem
			});
			this->开始ToolStripMenuItem->Name = L"开始ToolStripMenuItem";
			this->开始ToolStripMenuItem->Size = System::Drawing::Size(49, 24);
			this->开始ToolStripMenuItem->Text = L"开始";
			// 
			// 重置界面ToolStripMenuItem
			// 
			this->重置界面ToolStripMenuItem->Name = L"重置界面ToolStripMenuItem";
			this->重置界面ToolStripMenuItem->Size = System::Drawing::Size(138, 24);
			this->重置界面ToolStripMenuItem->Text = L"重置界面";
			this->重置界面ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainUI::重置界面ToolStripMenuItem_Click);
			// 
			// 退出ToolStripMenuItem
			// 
			this->退出ToolStripMenuItem->Name = L"退出ToolStripMenuItem";
			this->退出ToolStripMenuItem->Size = System::Drawing::Size(138, 24);
			this->退出ToolStripMenuItem->Text = L"退出";
			this->退出ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainUI::退出ToolStripMenuItem_Click);
			// 
			// 风格ToolStripMenuItem
			// 
			this->风格ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->设置背景颜色ToolStripMenuItem,
					this->设置坐标轴颜色ToolStripMenuItem, this->设置曲线颜色ToolStripMenuItem, this->设置字体颜色ToolStripMenuItem, this->曲线宽度ToolStripMenuItem
			});
			this->风格ToolStripMenuItem->Name = L"风格ToolStripMenuItem";
			this->风格ToolStripMenuItem->Size = System::Drawing::Size(49, 24);
			this->风格ToolStripMenuItem->Text = L"风格";
			// 
			// 设置背景颜色ToolStripMenuItem
			// 
			this->设置背景颜色ToolStripMenuItem->Name = L"设置背景颜色ToolStripMenuItem";
			this->设置背景颜色ToolStripMenuItem->Size = System::Drawing::Size(180, 24);
			this->设置背景颜色ToolStripMenuItem->Text = L"设置背景颜色";
			this->设置背景颜色ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainUI::设置背景颜色ToolStripMenuItem_Click);
			// 
			// 设置坐标轴颜色ToolStripMenuItem
			// 
			this->设置坐标轴颜色ToolStripMenuItem->Name = L"设置坐标轴颜色ToolStripMenuItem";
			this->设置坐标轴颜色ToolStripMenuItem->Size = System::Drawing::Size(180, 24);
			this->设置坐标轴颜色ToolStripMenuItem->Text = L"设置坐标轴颜色";
			this->设置坐标轴颜色ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainUI::设置坐标轴颜色ToolStripMenuItem_Click);
			// 
			// 设置曲线颜色ToolStripMenuItem
			// 
			this->设置曲线颜色ToolStripMenuItem->Name = L"设置曲线颜色ToolStripMenuItem";
			this->设置曲线颜色ToolStripMenuItem->Size = System::Drawing::Size(180, 24);
			this->设置曲线颜色ToolStripMenuItem->Text = L"设置曲线颜色";
			this->设置曲线颜色ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainUI::设置曲线颜色ToolStripMenuItem_Click);
			// 
			// 设置字体颜色ToolStripMenuItem
			// 
			this->设置字体颜色ToolStripMenuItem->Name = L"设置字体颜色ToolStripMenuItem";
			this->设置字体颜色ToolStripMenuItem->Size = System::Drawing::Size(180, 24);
			this->设置字体颜色ToolStripMenuItem->Text = L"设置字体颜色";
			this->设置字体颜色ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainUI::设置字体颜色ToolStripMenuItem_Click);
			// 
			// 曲线宽度ToolStripMenuItem
			// 
			this->曲线宽度ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->toolStripMenuItem2,
					this->toolStripMenuItem3, this->toolStripMenuItem4, this->toolStripMenuItem5, this->toolStripMenuItem6
			});
			this->曲线宽度ToolStripMenuItem->Name = L"曲线宽度ToolStripMenuItem";
			this->曲线宽度ToolStripMenuItem->Size = System::Drawing::Size(180, 24);
			this->曲线宽度ToolStripMenuItem->Text = L"曲线宽度";
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Checked = true;
			this->toolStripMenuItem2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(90, 24);
			this->toolStripMenuItem2->Text = L"1";
			this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &MainUI::toolStripMenuItem2_Click);
			// 
			// toolStripMenuItem3
			// 
			this->toolStripMenuItem3->Name = L"toolStripMenuItem3";
			this->toolStripMenuItem3->Size = System::Drawing::Size(90, 24);
			this->toolStripMenuItem3->Text = L"2";
			this->toolStripMenuItem3->Click += gcnew System::EventHandler(this, &MainUI::toolStripMenuItem3_Click);
			// 
			// toolStripMenuItem4
			// 
			this->toolStripMenuItem4->Name = L"toolStripMenuItem4";
			this->toolStripMenuItem4->Size = System::Drawing::Size(90, 24);
			this->toolStripMenuItem4->Text = L"3";
			this->toolStripMenuItem4->Click += gcnew System::EventHandler(this, &MainUI::toolStripMenuItem4_Click);
			// 
			// toolStripMenuItem5
			// 
			this->toolStripMenuItem5->Name = L"toolStripMenuItem5";
			this->toolStripMenuItem5->Size = System::Drawing::Size(90, 24);
			this->toolStripMenuItem5->Text = L"4";
			this->toolStripMenuItem5->Click += gcnew System::EventHandler(this, &MainUI::toolStripMenuItem5_Click);
			// 
			// toolStripMenuItem6
			// 
			this->toolStripMenuItem6->Name = L"toolStripMenuItem6";
			this->toolStripMenuItem6->Size = System::Drawing::Size(90, 24);
			this->toolStripMenuItem6->Text = L"5";
			this->toolStripMenuItem6->Click += gcnew System::EventHandler(this, &MainUI::toolStripMenuItem6_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(0, 31);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(982, 480);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainUI::pictureBox1_Paint);
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainUI::pictureBox1_MouseDown);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainUI::pictureBox1_MouseMove);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(616, 531);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(95, 18);
			this->radioButton1->TabIndex = 2;
			this->radioButton1->TabStop = true;
			this->radioButton1->Tag = L"CoordinateType";
			this->radioButton1->Text = L"直角坐标系";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MainUI::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(717, 531);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(81, 18);
			this->radioButton2->TabIndex = 3;
			this->radioButton2->Tag = L"CoordinateType";
			this->radioButton2->Text = L"极坐标系";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MainUI::radioButton2_CheckedChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(97, 528);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(312, 23);
			this->textBox1->TabIndex = 4;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(70, 531);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 14);
			this->label1->TabIndex = 5;
			this->label1->Text = L"y=";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(415, 528);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(131, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"绘制";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainUI::button1_Click);
			// 
			// MainUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(982, 556);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainUI";
			this->Text = L"FunctionViewer - 直角坐标模式";
			this->SizeChanged += gcnew System::EventHandler(this, &MainUI::MainUI_SizeChanged);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		System::Void 重置界面ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			this->resetUI();
		}
		System::Void 退出ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			Application::Exit();
		}
		bool init = false;
		System::Void pictureBox1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
			if (!init) {
				this->initGraphics();
				init = true;
			}
			this->drawGraphics(e->Graphics);
		}
		System::Void MainUI_SizeChanged(System::Object^  sender, System::EventArgs^  e) {
			int w = this->Width;
			int h = this->Height;
			if (h < 550) {
				h = 550;
				this->Height = 550;
				this->Refresh();
			}
			if (w < 550) {
				w = 550;
				this->Width = 550;
				this->Refresh();
			}

			this->pictureBox1->Width = w - 18;
			this->pictureBox1->Height = 0.8*h;
			this->pictureBox1->Refresh();

			this->label1->Location = Point(0.07 * w, 0.885 * h);
			this->label1->Refresh();

			this->textBox1->Location = Point(0.07 * w + 27, 0.88*h);
			this->textBox1->Width = 0.312 * w;
			this->textBox1->Refresh();

			this->button1->Location = Point(0.07 * w + 27 + 0.312 * w + 10, 0.88*h);
			this->button1->Width = 0.131 * w;
			this->button1->Refresh();

			this->radioButton1->Location = Point(0.616 * w, 0.885 * h);
			this->radioButton2->Location = Point(0.717 * w, 0.885 * h);
			this->radioButton1->Refresh();
			this->radioButton2->Refresh();

		}
		System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			initGraphics(this->info->CType);
			this->pictureBox1->Refresh();
		}
		System::Void 设置背景颜色ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			ColorDialog ^ cd = gcnew ColorDialog();
			cd->ShowDialog();
			style->BackgroundColor = cd->Color;
			delete cd;
		}
		System::Void 设置坐标轴颜色ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			ColorDialog ^ cd = gcnew ColorDialog();
			cd->ShowDialog();
			style->AxisColor = cd->Color;
			delete cd;
		}
		System::Void 设置曲线颜色ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			ColorDialog ^ cd = gcnew ColorDialog();
			cd->ShowDialog();
			style->LineColor = cd->Color;
			delete cd;
		}
		System::Void 设置字体颜色ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			ColorDialog ^ cd = gcnew ColorDialog();
			cd->ShowDialog();
			style->FontColor = cd->Color;
			delete cd;
		}
		System::Void toolStripMenuItem2_Click(System::Object^  sender, System::EventArgs^  e) {
			uncheckAllStrip();
			this->toolStripMenuItem2->Checked = true;
			this->style->Width = 1;
		}
		System::Void toolStripMenuItem3_Click(System::Object^  sender, System::EventArgs^  e) {
			uncheckAllStrip();
			this->toolStripMenuItem3->Checked = true;
			this->style->Width = 2;
		}
		System::Void toolStripMenuItem4_Click(System::Object^  sender, System::EventArgs^  e) {
			uncheckAllStrip();
			this->toolStripMenuItem4->Checked = true;
			this->style->Width = 3;
		}
		System::Void toolStripMenuItem5_Click(System::Object^  sender, System::EventArgs^  e) {
			uncheckAllStrip();
			this->toolStripMenuItem5->Checked = true;
			this->style->Width = 4;
		}
		System::Void toolStripMenuItem6_Click(System::Object^  sender, System::EventArgs^  e) {
			uncheckAllStrip();
			this->toolStripMenuItem6->Checked = true;
			this->style->Width = 5;
		}

		void uncheckAllStrip() {
			this->toolStripMenuItem2->Checked = false;
			this->toolStripMenuItem3->Checked = false;
			this->toolStripMenuItem4->Checked = false;
			this->toolStripMenuItem5->Checked = false;
			this->toolStripMenuItem6->Checked = false;
		}
		System::Void pictureBox1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			LastPoint = %e->Location;
		}
		System::Void pictureBox1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			if (e->Button == System::Windows::Forms::MouseButtons::Left) {
				int dx, dy;
				Point p = e->Location;
				dx = p.X - LastPoint->X;
				dy = p.Y - LastPoint->Y;
				info->Location->Location_X -= (dx / (info->Zoom * 50));
				info->Location->Location_Y += (dy / (info->Zoom * 50));
				LastPoint = %p;

				this->pictureBox1->Refresh();
			} else if (e->Button == System::Windows::Forms::MouseButtons::Right) {
				int dy;
				Point p = e->Location;
				dy = p.Y - LastPoint->Y;

				Point ^center = this->getCenter();
				int wx = center->X;
				int wy = center->Y;
				FPoint ^fp = this->info->toFPoint(center);

				info->Zoom += dy * 0.002;
				if (info->Zoom < 0.01) {
					info->Zoom = 0.01;
				}
				LastPoint = %p;
				Point ^nc = this->info->toPoint(fp);
				Point ^LU = gcnew Point(nc->X - wx, nc->Y - wy);
				FPoint ^newLU = this->info->toFPoint(LU);
				info->Location->Location_X = newLU->Location_X;
				info->Location->Location_Y = newLU->Location_Y;

				this->pictureBox1->Refresh();
			}

		}
		System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			if (this->info->CType != CoordinateType::Polar) {
				this->initGraphics(CoordinateType::Polar);
				this->pictureBox1->Refresh();
			}
		}

		System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			if (this->info->CType != CoordinateType::RightAngle) {
				this->initGraphics(CoordinateType::RightAngle);
				this->pictureBox1->Refresh();
			}
		}
		Point ^LastPoint;
		Style ^style = gcnew Style();
		ViewInfo ^info = nullptr;

		void resetUI() {
			style = gcnew Style();
			Point ^center = getCenter();
			info = gcnew ViewInfo(gcnew FPoint(-center->X / 50, center->Y / 50), CoordinateType::RightAngle);
			//TODO
		}

		void initGraphics() {
			initGraphics(CoordinateType::RightAngle);
		}
		void initGraphics(CoordinateType t) {
			Point ^center = getCenter();
			info = gcnew ViewInfo(gcnew FPoint(-center->X / 50, center->Y / 50), t);
			switch (t) {
			case CoordinateType::Polar:
				this->Text = L"FunctionViewer - 极坐标模式";
				break;
			case CoordinateType::RightAngle:
				this->Text = L"FunctionViewer - 直角坐标模式";
				break;
			}
			this->pictureBox1->Visible = true;
		}

		void drawGraphics(Graphics ^g) {
			g->Clear(style->BackgroundColor);
			drawAxis(g);
		}

		void drawAxis(Graphics ^g) {
			float zoom = info->Zoom;
			auto pbox = this->pictureBox1;
			float displayH = pbox->Height / (zoom * 50);
			Pen ^p = gcnew Pen(this->style->AxisColor, 3);
			SolidBrush ^arrbsh = gcnew SolidBrush(this->style->AxisColor);
			Point ^center = this->info->toPoint(gcnew FPoint(0, 0));
			SolidBrush ^fontbsh = gcnew SolidBrush(this->style->FontColor);
			if (info->CType == CoordinateType::Polar) {
				g->DrawArc(p, Rectangle(center->X, center->Y - 1, 3, 3), 0, 360);
				g->DrawLine(p, center->X, center->Y, pbox->Width, center->Y);
				g->DrawString("○", gcnew Drawing::Font("隶书", 9), fontbsh, Point(center->X - 18, center->Y - 5));
				return;
			}


			//if (info->Location->Location_Y * (info->Location->Location_Y - displayH) < 0) {
				//X轴
			g->DrawLine(p, 0, center->Y, this->pictureBox1->Width, center->Y);
			g->FillClosedCurve(arrbsh, getArrowPoint_Right(Point(this->pictureBox1->Width, center->Y)));
			g->DrawString("x", gcnew Drawing::Font("隶书", 12), fontbsh, Point(this->pictureBox1->Width - 15, center->Y + 15));
			//}

			float displayW = pbox->Width / (zoom * 50);
			//if (info->Location->Location_X * (info->Location->Location_X + displayW) < 0) {
				//Y轴
			g->DrawLine(p, center->X, 0, center->X, this->pictureBox1->Height);
			g->FillClosedCurve(arrbsh, getArrowPoint_Top(Point(center->X, 0)));
			int nw = 10;
			FPoint ^LU = this->info->toFPoint(gcnew Point(0, 0));
			for (int t = Math::Abs(LU->Location_Y); t >= 10; t /= 10) {
				nw += 10;
			}
			if (LU->Location_Y < 0) {
				nw += 10;
			}
			g->DrawString("y", gcnew Drawing::Font("隶书", 12), fontbsh, Point(center->X - 20 - nw, 5));
			//}
			//绘制原点
			g->DrawString("0", gcnew Drawing::Font("隶书", 15), fontbsh, Point(center->X - 18, center->Y + 4));
			//绘制刻度
			int interval = (0.5 / zoom) * 2;
			if (interval < 1) {
				interval = 1;
			}
			FPoint ^RD = this->info->toFPoint(gcnew Point(pbox->Width, pbox->Height));
			Drawing::Font ^f = gcnew Drawing::Font("隶书", 12);
			for (int i = LU->Location_X; i <= RD->Location_X; i += 1) {
				if (i == 0) {
					continue;
				}
				FPoint ^start = gcnew FPoint(i, 0);
				Point ^wp = this->info->toPoint(start);
				if (i % interval == 0) {
					g->DrawLine(p, *wp, Point(wp->X, wp->Y - 5));
					g->DrawString("" + i, f, fontbsh, Point(wp->X - 5 - (i < 0 ? 5 : 0), wp->Y + 6));
				} else if (interval < 5) {
					g->DrawLine(p, *wp, Point(wp->X, wp->Y - 3));
				}
			}

			for (int i = LU->Location_Y; i >= RD->Location_Y; i -= 1) {
				if (i == 0) {
					continue;
				}
				FPoint ^start = gcnew FPoint(0, i);
				Point ^wp = this->info->toPoint(start);
				if (i % interval == 0) {
					g->DrawLine(p, *wp, Point(wp->X + 5, wp->Y));
					int pan = 12;
					for (int t = Math::Abs(i); t >= 10; t /= 10) {
						pan += 12;
					}
					g->DrawString("" + i, f, fontbsh, Point(wp->X - 3 - pan - (i < 0 ? 12 : 0), wp->Y - 12));
				} else if (interval < 5) {
					g->DrawLine(p, *wp, Point(wp->X + 3, wp->Y));
				}
			}
		}

		array<Point>^ getArrowPoint_Right(Point t) {
			array<Point> ^arr = gcnew array<Point>(3);
			int x = t.X;
			int y = t.Y;
			arr[0] = t;
			arr[1] = Point(x - 15, y + 5);
			arr[2] = Point(x - 15, y - 5);
			return arr;
		}
		array<Point>^ getArrowPoint_Top(Point t) {
			array<Point> ^arr = gcnew array<Point>(3);
			int x = t.X;
			int y = t.Y;
			arr[0] = t;
			arr[1] = Point(x + 5, y + 15);
			arr[2] = Point(x - 5, y + 15);
			return arr;
		}

		//返回绘图中心 (UI坐标系)
		Point ^ getCenter() {
			auto p = this->pictureBox1;
			return gcnew Point(p->Width / 2, p->Height / 2);
		}
	};
}
