#pragma once
#include "Database.h"


namespace Payroll {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			login_btn->BackColor = System::Drawing::Color::White;
		}

		System::Void ResetInputs();
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ payrollmanagement_lbl;
	private: System::Windows::Forms::Label^ admin_lbl;
	protected:

	private: System::Windows::Forms::Label^ Username_lbl;
	private: System::Windows::Forms::Label^ password_lbl;

	private: System::Windows::Forms::TextBox^ Username_txtbox;
	private: System::Windows::Forms::TextBox^ Password_txtbox;


	private: System::Windows::Forms::Button^ login_btn;
	private: System::Windows::Forms::FlowLayoutPanel^ exitlogin_pnl;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->payrollmanagement_lbl = (gcnew System::Windows::Forms::Label());
			this->admin_lbl = (gcnew System::Windows::Forms::Label());
			this->Username_lbl = (gcnew System::Windows::Forms::Label());
			this->password_lbl = (gcnew System::Windows::Forms::Label());
			this->Username_txtbox = (gcnew System::Windows::Forms::TextBox());
			this->Password_txtbox = (gcnew System::Windows::Forms::TextBox());
			this->login_btn = (gcnew System::Windows::Forms::Button());
			this->exitlogin_pnl = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->SuspendLayout();
			// 
			// payrollmanagement_lbl
			// 
			this->payrollmanagement_lbl->AutoSize = true;
			this->payrollmanagement_lbl->BackColor = System::Drawing::Color::Transparent;
			this->payrollmanagement_lbl->Font = (gcnew System::Drawing::Font(L"Poppins", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->payrollmanagement_lbl->ForeColor = System::Drawing::Color::White;
			this->payrollmanagement_lbl->Location = System::Drawing::Point(115, 123);
			this->payrollmanagement_lbl->Name = L"payrollmanagement_lbl";
			this->payrollmanagement_lbl->Size = System::Drawing::Size(513, 58);
			this->payrollmanagement_lbl->TabIndex = 2;
			this->payrollmanagement_lbl->Text = L"Payroll Management System";
			// 
			// admin_lbl
			// 
			this->admin_lbl->AutoSize = true;
			this->admin_lbl->BackColor = System::Drawing::Color::Transparent;
			this->admin_lbl->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->admin_lbl->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->admin_lbl->Location = System::Drawing::Point(309, 183);
			this->admin_lbl->Name = L"admin_lbl";
			this->admin_lbl->Size = System::Drawing::Size(132, 28);
			this->admin_lbl->TabIndex = 12;
			this->admin_lbl->Text = L"Admin Login";
			// 
			// Username_lbl
			// 
			this->Username_lbl->AutoSize = true;
			this->Username_lbl->BackColor = System::Drawing::Color::Transparent;
			this->Username_lbl->Font = (gcnew System::Drawing::Font(L"Poppins", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Username_lbl->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Username_lbl->Location = System::Drawing::Point(241, 272);
			this->Username_lbl->Name = L"Username_lbl";
			this->Username_lbl->Size = System::Drawing::Size(111, 31);
			this->Username_lbl->TabIndex = 13;
			this->Username_lbl->Text = L"Username:";
			// 
			// password_lbl
			// 
			this->password_lbl->AutoSize = true;
			this->password_lbl->BackColor = System::Drawing::Color::Transparent;
			this->password_lbl->Font = (gcnew System::Drawing::Font(L"Poppins", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_lbl->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->password_lbl->Location = System::Drawing::Point(241, 375);
			this->password_lbl->Name = L"password_lbl";
			this->password_lbl->Size = System::Drawing::Size(104, 31);
			this->password_lbl->TabIndex = 14;
			this->password_lbl->Text = L"Password:";
			// 
			// Username_txtbox
			// 
			this->Username_txtbox->Location = System::Drawing::Point(245, 302);
			this->Username_txtbox->Multiline = true;
			this->Username_txtbox->Name = L"Username_txtbox";
			this->Username_txtbox->Size = System::Drawing::Size(257, 34);
			this->Username_txtbox->TabIndex = 1;
			// 
			// Password_txtbox
			// 
			this->Password_txtbox->Location = System::Drawing::Point(245, 405);
			this->Password_txtbox->Multiline = true;
			this->Password_txtbox->Name = L"Password_txtbox";
			this->Password_txtbox->PasswordChar = '*';
			this->Password_txtbox->Size = System::Drawing::Size(257, 34);
			this->Password_txtbox->TabIndex = 2;
			this->Password_txtbox->Tag = L"";
			// 
			// login_btn
			// 
			this->login_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->login_btn->FlatAppearance->BorderSize = 0;
			this->login_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->login_btn->Font = (gcnew System::Drawing::Font(L"Nunito", 7.799999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->login_btn->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->login_btn->Location = System::Drawing::Point(314, 500);
			this->login_btn->Name = L"login_btn";
			this->login_btn->Size = System::Drawing::Size(102, 32);
			this->login_btn->TabIndex = 3;
			this->login_btn->Text = L"Login";
			this->login_btn->UseVisualStyleBackColor = true;
			this->login_btn->Click += gcnew System::EventHandler(this, &LoginForm::login_btn_Click);
			// 
			// exitlogin_pnl
			// 
			this->exitlogin_pnl->BackColor = System::Drawing::Color::Transparent;
			this->exitlogin_pnl->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"exitlogin_pnl.BackgroundImage")));
			this->exitlogin_pnl->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->exitlogin_pnl->Cursor = System::Windows::Forms::Cursors::Hand;
			this->exitlogin_pnl->ForeColor = System::Drawing::Color::White;
			this->exitlogin_pnl->Location = System::Drawing::Point(683, 27);
			this->exitlogin_pnl->Name = L"exitlogin_pnl";
			this->exitlogin_pnl->Size = System::Drawing::Size(34, 31);
			this->exitlogin_pnl->TabIndex = 15;
			this->exitlogin_pnl->Click += gcnew System::EventHandler(this, &LoginForm::exitlogin_pnl_Click);
			this->exitlogin_pnl->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &LoginForm::exitlogin_pnl_Paint);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(747, 624);
			this->Controls->Add(this->exitlogin_pnl);
			this->Controls->Add(this->login_btn);
			this->Controls->Add(this->Password_txtbox);
			this->Controls->Add(this->Username_txtbox);
			this->Controls->Add(this->password_lbl);
			this->Controls->Add(this->Username_lbl);
			this->Controls->Add(this->admin_lbl);
			this->Controls->Add(this->payrollmanagement_lbl);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"LoginForm";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
	private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void login_btn_Click(System::Object^ sender, System::EventArgs^ e); // declaration only

	private: System::Void exitlogin_pnl_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void exitlogin_pnl_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}

	protected: virtual void OnPaint(PaintEventArgs^ e) override {
		Form::OnPaint(e);
		System::Drawing::Rectangle rect = this->ClientRectangle;
		System::Drawing::Drawing2D::LinearGradientBrush^ brush =
			gcnew System::Drawing::Drawing2D::LinearGradientBrush(
				rect,
				System::Drawing::Color::LightSkyBlue,  // top color LightSkyBlue
				System::Drawing::Color::FromArgb(232, 243, 255),                    // bottom color FromArgb(232, 243, 255)
				System::Drawing::Drawing2D::LinearGradientMode::Vertical
			);
		e->Graphics->FillRectangle(brush, rect);
	}

};
}  // Close namespace Payroll