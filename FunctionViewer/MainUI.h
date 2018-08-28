#pragma once


namespace FunctionViewer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;




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
	private: System::Windows::Forms::ToolStripMenuItem^  重置页面ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  退出ToolStripMenuItem;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;

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
			this->重置页面ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->退出ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(18, 18);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->开始ToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(951, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 开始ToolStripMenuItem
			// 
			this->开始ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->重置页面ToolStripMenuItem,
					this->退出ToolStripMenuItem
			});
			this->开始ToolStripMenuItem->Name = L"开始ToolStripMenuItem";
			this->开始ToolStripMenuItem->Size = System::Drawing::Size(49, 24);
			this->开始ToolStripMenuItem->Text = L"开始";
			// 
			// 重置页面ToolStripMenuItem
			// 
			this->重置页面ToolStripMenuItem->Name = L"重置页面ToolStripMenuItem";
			this->重置页面ToolStripMenuItem->Size = System::Drawing::Size(138, 24);
			this->重置页面ToolStripMenuItem->Text = L"重置页面";
			this->重置页面ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainUI::重置页面ToolStripMenuItem_Click);
			// 
			// 退出ToolStripMenuItem
			// 
			this->退出ToolStripMenuItem->Name = L"退出ToolStripMenuItem";
			this->退出ToolStripMenuItem->Size = System::Drawing::Size(138, 24);
			this->退出ToolStripMenuItem->Text = L"退出";
			this->退出ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainUI::退出ToolStripMenuItem_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(48, 368);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(326, 23);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(21, 371);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 14);
			this->label1->TabIndex = 2;
			this->label1->Text = L"y=";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(394, 364);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(91, 32);
			this->button1->TabIndex = 3;
			this->button1->Text = L"显示";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainUI::button1_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(512, 369);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(95, 18);
			this->radioButton1->TabIndex = 5;
			this->radioButton1->TabStop = true;
			this->radioButton1->Tag = L"CoordinateType";
			this->radioButton1->Text = L"直角坐标系";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MainUI::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(641, 367);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(81, 18);
			this->radioButton2->TabIndex = 6;
			this->radioButton2->Tag = L"CoordinateType";
			this->radioButton2->Text = L"极坐标系";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MainUI::radioButton2_CheckedChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(0, 31);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(951, 313);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			// 
			// MainUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 14);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(951, 465);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainUI";
			this->Text = L"MainUI";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		System::Void 退出ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			Application::Exit();
		}

		System::Void radioButton1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			Type = CoordinateType::RightAngle;
			resetUI();
		}
		System::Void radioButton2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			Type = CoordinateType::Polar;
			resetUI();
		}
		System::Void 重置页面ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			resetUI();
		}
		System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			write();
		}

		String ^ getFunction() {
			return this->textBox1->Text;
		}

		void resetUI() {
			this->textBox1->Text = L"";
			x = 0;
			y = 0;
			zoom = 1.0;
		}

		int x = 0, y = 0;
		double zoom = 1.0;
		void write() {
			Graphics^ g = this->pictureBox1->CreateGraphics();
			g->Clear(Color::White);
			writeBase(g);
		}

		void writeBase(Graphics ^ g) {
			Pen ^ p = gcnew Pen(Color::Black);
			g->DrawLine(p, 0, 125, 1000, 125);
		}
	};


	public enum class CoordinateType {
		RightAngle, Polar
	};

	CoordinateType Type = CoordinateType::RightAngle;

	public ref class ViewInfo {
	private:
		int x, y;
		float zoom = 1.0;
		CoordinateType type;
	public:
		ViewInfo(int x, int y, CoordinateType type) {
			this->x = x;
			this->y = y;
			this->type = type;
		}
		//表示绘制界面左上角像素在坐标系中X的位置
		property int Location_X {
			int get() {
				return this->x;
			}
			void set(int value) {
				this->x = value;
			}
		}
		//表示绘制界面左上角像素在坐标系中Y的位置
		property int Location_Y {
			int get() {
				return this->y;
			}
			void set(int value) {
				this->y = value;
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


}
