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
	/// MainUI ժҪ
	/// </summary>
	public ref class MainUI : public System::Windows::Forms::Form {
	public:
		MainUI(void) {
			InitializeComponent();
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~MainUI() {
			if (components) {
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  ��ʼToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ���ý���ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �˳�ToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::ToolStripMenuItem^  ���ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ���ñ�����ɫToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ������������ɫToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ����������ɫToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ���߿��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem5;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem6;

	private:
		/// <summary>
		/// ����������������
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ�޸�
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void) {
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->��ʼToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���ý���ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�˳�ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���ñ�����ɫToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������ɫToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ɫToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���߿��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
				this->��ʼToolStripMenuItem,
					this->���ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(982, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ��ʼToolStripMenuItem
			// 
			this->��ʼToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->���ý���ToolStripMenuItem,
					this->�˳�ToolStripMenuItem
			});
			this->��ʼToolStripMenuItem->Name = L"��ʼToolStripMenuItem";
			this->��ʼToolStripMenuItem->Size = System::Drawing::Size(49, 24);
			this->��ʼToolStripMenuItem->Text = L"��ʼ";
			// 
			// ���ý���ToolStripMenuItem
			// 
			this->���ý���ToolStripMenuItem->Name = L"���ý���ToolStripMenuItem";
			this->���ý���ToolStripMenuItem->Size = System::Drawing::Size(138, 24);
			this->���ý���ToolStripMenuItem->Text = L"���ý���";
			this->���ý���ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainUI::���ý���ToolStripMenuItem_Click);
			// 
			// �˳�ToolStripMenuItem
			// 
			this->�˳�ToolStripMenuItem->Name = L"�˳�ToolStripMenuItem";
			this->�˳�ToolStripMenuItem->Size = System::Drawing::Size(138, 24);
			this->�˳�ToolStripMenuItem->Text = L"�˳�";
			this->�˳�ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainUI::�˳�ToolStripMenuItem_Click);
			// 
			// ���ToolStripMenuItem
			// 
			this->���ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->���ñ�����ɫToolStripMenuItem,
					this->������������ɫToolStripMenuItem, this->����������ɫToolStripMenuItem, this->���߿��ToolStripMenuItem
			});
			this->���ToolStripMenuItem->Name = L"���ToolStripMenuItem";
			this->���ToolStripMenuItem->Size = System::Drawing::Size(49, 24);
			this->���ToolStripMenuItem->Text = L"���";
			// 
			// ���ñ�����ɫToolStripMenuItem
			// 
			this->���ñ�����ɫToolStripMenuItem->Name = L"���ñ�����ɫToolStripMenuItem";
			this->���ñ�����ɫToolStripMenuItem->Size = System::Drawing::Size(180, 24);
			this->���ñ�����ɫToolStripMenuItem->Text = L"���ñ�����ɫ";
			this->���ñ�����ɫToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainUI::���ñ�����ɫToolStripMenuItem_Click);
			// 
			// ������������ɫToolStripMenuItem
			// 
			this->������������ɫToolStripMenuItem->Name = L"������������ɫToolStripMenuItem";
			this->������������ɫToolStripMenuItem->Size = System::Drawing::Size(180, 24);
			this->������������ɫToolStripMenuItem->Text = L"������������ɫ";
			this->������������ɫToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainUI::������������ɫToolStripMenuItem_Click);
			// 
			// ����������ɫToolStripMenuItem
			// 
			this->����������ɫToolStripMenuItem->Name = L"����������ɫToolStripMenuItem";
			this->����������ɫToolStripMenuItem->Size = System::Drawing::Size(180, 24);
			this->����������ɫToolStripMenuItem->Text = L"����������ɫ";
			this->����������ɫToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainUI::����������ɫToolStripMenuItem_Click);
			// 
			// ���߿��ToolStripMenuItem
			// 
			this->���߿��ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->toolStripMenuItem2,
					this->toolStripMenuItem3, this->toolStripMenuItem4, this->toolStripMenuItem5, this->toolStripMenuItem6
			});
			this->���߿��ToolStripMenuItem->Name = L"���߿��ToolStripMenuItem";
			this->���߿��ToolStripMenuItem->Size = System::Drawing::Size(180, 24);
			this->���߿��ToolStripMenuItem->Text = L"���߿��";
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
			this->radioButton1->Text = L"ֱ������ϵ";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(717, 531);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(81, 18);
			this->radioButton2->TabIndex = 3;
			this->radioButton2->Tag = L"CoordinateType";
			this->radioButton2->Text = L"������ϵ";
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
			this->button1->Text = L"����";
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
			this->Text = L"FunctionViewer - ֱ������ģʽ";
			this->SizeChanged += gcnew System::EventHandler(this, &MainUI::MainUI_SizeChanged);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		System::Void ���ý���ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			this->resetUI();
		}
		System::Void �˳�ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			Application::Exit();
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
			initGraphics();
			drawGraphics();
		}
		System::Void ���ñ�����ɫToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			ColorDialog ^ cd = gcnew ColorDialog();
			cd->ShowDialog();
			style->BackgroundColor = cd->Color;
			delete cd;
		}
		System::Void ������������ɫToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			ColorDialog ^ cd = gcnew ColorDialog();
			cd->ShowDialog();
			style->AxisColor = cd->Color;
			delete cd;
		}
		System::Void ����������ɫToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			ColorDialog ^ cd = gcnew ColorDialog();
			cd->ShowDialog();
			style->LineColor = cd->Color;
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
				drawGraphics();
			} else if (e->Button == System::Windows::Forms::MouseButtons::Right) {
				int dy;
				Point p = e->Location;
				dy = p.Y - LastPoint->Y;
				info->Zoom += dy * 0.01;
				LastPoint = %p;
				drawGraphics();
			}

		}
		System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			//TODO
		}
		Point ^LastPoint;
		Style ^style = gcnew Style();
		ViewInfo ^info = nullptr;

		void resetUI() {
			style = gcnew Style();
			Point ^center = getCenter();
			info = gcnew ViewInfo(gcnew FPoint(-center->X / 50, center->Y / 50), CoordinateType::RightAngle);
		}

		void initGraphics() {
			Point ^center = getCenter();
			info = gcnew ViewInfo(gcnew FPoint(-center->X / 50, center->Y / 50), CoordinateType::RightAngle);
		}

		void drawGraphics() {
			Graphics ^g = this->pictureBox1->CreateGraphics();
			g->Clear(style->BackgroundColor);
			drawAxis(g);
		}

		void drawAxis(Graphics ^g) {
			float zoom = info->Zoom;
			float displayH = 2 * (getCenter()->Y) / (zoom * 50);
			Pen ^p = gcnew Pen(this->style->AxisColor, 3);
			if (info->Location->Location_Y * (info->Location->Location_Y - displayH) < 0) {
				g->DrawLine(p, 0.0f, info->Location->Location_Y * zoom * 50, (float)this->pictureBox1->Width, info->Location->Location_Y * zoom * 50);
			}

			float displayW = 2 * (getCenter()->X) / (zoom * 50);
			if (info->Location->Location_X * (info->Location->Location_X + displayW) < 0) {
				g->DrawLine(p, -info->Location->Location_X * zoom * 50, 0.0f, -info->Location->Location_X * zoom * 50, (float)this->pictureBox1->Height);
			}

		}

		//���ػ�ͼ���� (UI����ϵ)
		Point ^ getCenter() {
			auto p = this->pictureBox1;
			return gcnew Point(p->Width / 2, p->Height / 2);
		}
};
}
