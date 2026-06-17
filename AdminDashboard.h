#pragma once
#pragma once
#include "LoginForm.h"
#include "EmployeeForm.h"
#include "PayRollForm.h"
#include "PayrollRecords.h"  // Or PayrollRecords if that's the name
#include "ReportForms.h"
#include "PayslipFormh.h"

// removed: #include "LoginForm.h"

namespace Payroll {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing::Drawing2D;

	public ref class AdminDashboard : public System::Windows::Forms::Form
	{
	public:
		AdminDashboard(void)
		{
			InitializeComponent();
		}

	protected:
		~AdminDashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ headerPanel;
	private: System::Windows::Forms::Label^ admindash_lbl;
	protected:
	private: System::Windows::Forms::Label^ payrollRecords_lbl;
	private: System::Windows::Forms::Panel^ records_pnl;
	private: System::Windows::Forms::Label^ payrollcompu_lbl;
	private: System::Windows::Forms::Panel^ computation_pnl;
	private: System::Windows::Forms::Label^ employeeManage_lbl;
	private: System::Windows::Forms::Panel^ employeeicon_pnl;
	private: System::Windows::Forms::FlowLayoutPanel^ exit_pnl;
	private: System::Windows::Forms::Panel^ reportmodule_pnl;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminDashboard::typeid));
			this->headerPanel = (gcnew System::Windows::Forms::Panel());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->admindash_lbl = (gcnew System::Windows::Forms::Label());
			this->payrollRecords_lbl = (gcnew System::Windows::Forms::Label());
			this->records_pnl = (gcnew System::Windows::Forms::Panel());
			this->payrollcompu_lbl = (gcnew System::Windows::Forms::Label());
			this->computation_pnl = (gcnew System::Windows::Forms::Panel());
			this->employeeManage_lbl = (gcnew System::Windows::Forms::Label());
			this->employeeicon_pnl = (gcnew System::Windows::Forms::Panel());
			this->exit_pnl = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->reportmodule_pnl = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->headerPanel->SuspendLayout();
			this->records_pnl->SuspendLayout();
			this->computation_pnl->SuspendLayout();
			this->employeeicon_pnl->SuspendLayout();
			this->reportmodule_pnl->SuspendLayout();
			this->SuspendLayout();
			// 
			// headerPanel
			// 
			this->headerPanel->BackColor = System::Drawing::Color::SteelBlue;
			this->headerPanel->Controls->Add(this->flowLayoutPanel1);
			this->headerPanel->Controls->Add(this->admindash_lbl);
			this->headerPanel->Dock = System::Windows::Forms::DockStyle::Top;
			this->headerPanel->Location = System::Drawing::Point(0, 0);
			this->headerPanel->Name = L"headerPanel";
			this->headerPanel->Size = System::Drawing::Size(1210, 82);
			this->headerPanel->TabIndex = 0;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"flowLayoutPanel1.BackgroundImage")));
			this->flowLayoutPanel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->flowLayoutPanel1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->flowLayoutPanel1->ForeColor = System::Drawing::Color::White;
			this->flowLayoutPanel1->Location = System::Drawing::Point(37, 32);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(36, 37);
			this->flowLayoutPanel1->TabIndex = 5;
			// 
			// admindash_lbl
			// 
			this->admindash_lbl->AutoSize = true;
			this->admindash_lbl->Font = (gcnew System::Drawing::Font(L"Poppins", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->admindash_lbl->ForeColor = System::Drawing::Color::White;
			this->admindash_lbl->Location = System::Drawing::Point(72, 23);
			this->admindash_lbl->Name = L"admindash_lbl";
			this->admindash_lbl->Size = System::Drawing::Size(303, 53);
			this->admindash_lbl->TabIndex = 1;
			this->admindash_lbl->Text = L"Admin Dashboard";
			// 
			// payrollRecords_lbl
			// 
			this->payrollRecords_lbl->AutoSize = true;
			this->payrollRecords_lbl->Font = (gcnew System::Drawing::Font(L"Poppins", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->payrollRecords_lbl->Location = System::Drawing::Point(13, 193);
			this->payrollRecords_lbl->Name = L"payrollRecords_lbl";
			this->payrollRecords_lbl->Size = System::Drawing::Size(225, 30);
			this->payrollRecords_lbl->TabIndex = 2;
			this->payrollRecords_lbl->Text = L"           Payroll Records        ";
			this->payrollRecords_lbl->Click += gcnew System::EventHandler(this, &AdminDashboard::label3_Click);
			// 
			// records_pnl
			// 
			this->records_pnl->BackColor = System::Drawing::Color::LightSkyBlue;
			this->records_pnl->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"records_pnl.BackgroundImage")));
			this->records_pnl->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->records_pnl->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->records_pnl->Controls->Add(this->payrollRecords_lbl);
			this->records_pnl->Cursor = System::Windows::Forms::Cursors::Hand;
			this->records_pnl->Location = System::Drawing::Point(626, 232);
			this->records_pnl->Name = L"records_pnl";
			this->records_pnl->Size = System::Drawing::Size(252, 239);
			this->records_pnl->TabIndex = 3;
			this->records_pnl->Click += gcnew System::EventHandler(this, &AdminDashboard::records_pnl_Click);
			this->records_pnl->MouseEnter += gcnew System::EventHandler(this, &AdminDashboard::records_pnl_MouseEnter);
			this->records_pnl->MouseLeave += gcnew System::EventHandler(this, &AdminDashboard::records_pnl_MouseLeave);
			// 
			// payrollcompu_lbl
			// 
			this->payrollcompu_lbl->AutoSize = true;
			this->payrollcompu_lbl->Font = (gcnew System::Drawing::Font(L"Poppins", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->payrollcompu_lbl->Location = System::Drawing::Point(12, 193);
			this->payrollcompu_lbl->Name = L"payrollcompu_lbl";
			this->payrollcompu_lbl->Size = System::Drawing::Size(233, 30);
			this->payrollcompu_lbl->TabIndex = 3;
			this->payrollcompu_lbl->Text = L"   Payroll Computation      ";
			this->payrollcompu_lbl->Click += gcnew System::EventHandler(this, &AdminDashboard::label2_Click_1);
			// 
			// computation_pnl
			// 
			this->computation_pnl->BackColor = System::Drawing::Color::LightSkyBlue;
			this->computation_pnl->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"computation_pnl.BackgroundImage")));
			this->computation_pnl->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->computation_pnl->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->computation_pnl->Controls->Add(this->payrollcompu_lbl);
			this->computation_pnl->Cursor = System::Windows::Forms::Cursors::Hand;
			this->computation_pnl->Location = System::Drawing::Point(354, 232);
			this->computation_pnl->Name = L"computation_pnl";
			this->computation_pnl->Size = System::Drawing::Size(249, 239);
			this->computation_pnl->TabIndex = 2;
			this->computation_pnl->Click += gcnew System::EventHandler(this, &AdminDashboard::computation_pnl_Click);
			this->computation_pnl->MouseEnter += gcnew System::EventHandler(this, &AdminDashboard::computation_pnl_MouseEnter);
			this->computation_pnl->MouseLeave += gcnew System::EventHandler(this, &AdminDashboard::computation_pnl_MouseLeave);
			// 
			// employeeManage_lbl
			// 
			this->employeeManage_lbl->AutoSize = true;
			this->employeeManage_lbl->Font = (gcnew System::Drawing::Font(L"Poppins", 10, System::Drawing::FontStyle::Bold));
			this->employeeManage_lbl->Location = System::Drawing::Point(18, 193);
			this->employeeManage_lbl->Name = L"employeeManage_lbl";
			this->employeeManage_lbl->Size = System::Drawing::Size(222, 30);
			this->employeeManage_lbl->TabIndex = 0;
			this->employeeManage_lbl->Text = L"Employee Management";
			this->employeeManage_lbl->Click += gcnew System::EventHandler(this, &AdminDashboard::label1_Click);
			// 
			// employeeicon_pnl
			// 
			this->employeeicon_pnl->BackColor = System::Drawing::Color::LightSkyBlue;
			this->employeeicon_pnl->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"employeeicon_pnl.BackgroundImage")));
			this->employeeicon_pnl->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->employeeicon_pnl->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->employeeicon_pnl->Controls->Add(this->employeeManage_lbl);
			this->employeeicon_pnl->Cursor = System::Windows::Forms::Cursors::Hand;
			this->employeeicon_pnl->Location = System::Drawing::Point(57, 232);
			this->employeeicon_pnl->Name = L"employeeicon_pnl";
			this->employeeicon_pnl->Size = System::Drawing::Size(275, 239);
			this->employeeicon_pnl->TabIndex = 1;
			this->employeeicon_pnl->Click += gcnew System::EventHandler(this, &AdminDashboard::employeeicon_pnl_Click);
			this->employeeicon_pnl->MouseEnter += gcnew System::EventHandler(this, &AdminDashboard::employeeicon_pnl_MouseEnter);
			this->employeeicon_pnl->MouseLeave += gcnew System::EventHandler(this, &AdminDashboard::employeeicon_MouseLeave);
			// 
			// exit_pnl
			// 
			this->exit_pnl->BackColor = System::Drawing::Color::Transparent;
			this->exit_pnl->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"exit_pnl.BackgroundImage")));
			this->exit_pnl->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->exit_pnl->Cursor = System::Windows::Forms::Cursors::Hand;
			this->exit_pnl->ForeColor = System::Drawing::Color::White;
			this->exit_pnl->Location = System::Drawing::Point(28, 649);
			this->exit_pnl->Name = L"exit_pnl";
			this->exit_pnl->Size = System::Drawing::Size(85, 42);
			this->exit_pnl->TabIndex = 4;
			this->exit_pnl->Click += gcnew System::EventHandler(this, &AdminDashboard::exit_pnl_Click);
			// 
			// reportmodule_pnl
			// 
			this->reportmodule_pnl->BackColor = System::Drawing::Color::LightSkyBlue;
			this->reportmodule_pnl->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"reportmodule_pnl.BackgroundImage")));
			this->reportmodule_pnl->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->reportmodule_pnl->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->reportmodule_pnl->Controls->Add(this->label1);
			this->reportmodule_pnl->Cursor = System::Windows::Forms::Cursors::Hand;
			this->reportmodule_pnl->Location = System::Drawing::Point(899, 232);
			this->reportmodule_pnl->Name = L"reportmodule_pnl";
			this->reportmodule_pnl->Size = System::Drawing::Size(252, 239);
			this->reportmodule_pnl->TabIndex = 4;
			this->reportmodule_pnl->Click += gcnew System::EventHandler(this, &AdminDashboard::reportmodule_pnl_Click);
			this->reportmodule_pnl->MouseEnter += gcnew System::EventHandler(this, &AdminDashboard::reportmodule_pnl_MouseEnter);
			this->reportmodule_pnl->MouseLeave += gcnew System::EventHandler(this, &AdminDashboard::reportmodule_pnl_MouseLeave);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Poppins", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 193);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(225, 30);
			this->label1->TabIndex = 2;
			this->label1->Text = L"           Reports Module        ";
			// 
			// AdminDashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(1210, 712);
			this->Controls->Add(this->reportmodule_pnl);
			this->Controls->Add(this->records_pnl);
			this->Controls->Add(this->computation_pnl);
			this->Controls->Add(this->employeeicon_pnl);
			this->Controls->Add(this->exit_pnl);
			this->Controls->Add(this->headerPanel);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AdminDashboard";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &AdminDashboard::AdminDashboard_Load);
			this->headerPanel->ResumeLayout(false);
			this->headerPanel->PerformLayout();
			this->records_pnl->ResumeLayout(false);
			this->records_pnl->PerformLayout();
			this->computation_pnl->ResumeLayout(false);
			this->computation_pnl->PerformLayout();
			this->employeeicon_pnl->ResumeLayout(false);
			this->employeeicon_pnl->PerformLayout();
			this->reportmodule_pnl->ResumeLayout(false);
			this->reportmodule_pnl->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void employeeicon_pnl_Click(System::Object^ sender, System::EventArgs^ e) {
		EmployeeForm^ empForm = gcnew EmployeeForm();
		empForm->Owner = this;
		empForm->Show();
		this->Hide();
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}

		   // declaration only; implementation moved to AdminDashboard.cpp to avoid circular include
	private: System::Void exit_pnl_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void AdminDashboard_Load(System::Object^ sender, System::EventArgs^ e) {
	}
		   // employee icon
	private: System::Void employeeicon_pnl_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		employeeicon_pnl->BackColor = System::Drawing::Color::SteelBlue;
	}
	private: System::Void employeeicon_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		employeeicon_pnl->BackColor = System::Drawing::Color::LightSkyBlue;
	}

		   // payroll computation icon
	private: System::Void computation_pnl_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		computation_pnl->BackColor = System::Drawing::Color::SteelBlue;
	}

	private: System::Void computation_pnl_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		computation_pnl->BackColor = System::Drawing::Color::LightSkyBlue;
	}

		   // payroll records icon
	private: System::Void records_pnl_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		records_pnl->BackColor = System::Drawing::Color::SteelBlue;
	}

	private: System::Void records_pnl_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		records_pnl->BackColor = System::Drawing::Color::LightSkyBlue;
	}

	private: System::Void computation_pnl_Click(System::Object^ sender, System::EventArgs^ e) {
		PayRollForm^ payrollForm = gcnew PayRollForm();
		payrollForm->Owner = this;
		payrollForm->Show();
		this->Hide();
	}
	private: System::Void records_pnl_Click(System::Object^ sender, System::EventArgs^ e) {
		PayrollRecords^ recordsForm = gcnew PayrollRecords();  // OR just PayrollRecords
		recordsForm->Owner = this;
		recordsForm->Show();
		this->Hide();
	}
	private: System::Void reportmodule_pnl_Click(System::Object^ sender, System::EventArgs^ e) {
		ReportForms^ reportForm = gcnew ReportForms();
		reportForm->Owner = this;
		reportForm->Show();
		this->Hide();
	}
	private: System::Void reportmodule_pnl_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		reportmodule_pnl->BackColor = System::Drawing::Color::SteelBlue;
	}
	private: System::Void reportmodule_pnl_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		reportmodule_pnl->BackColor = System::Drawing::Color::LightSkyBlue;
	}

	protected: virtual void OnPaint(PaintEventArgs^ e) override {
			Form::OnPaint(e);
			System::Drawing::Rectangle rect = this->ClientRectangle;
			System::Drawing::Drawing2D::LinearGradientBrush^ brush =
				gcnew System::Drawing::Drawing2D::LinearGradientBrush(
					rect,
					System::Drawing::Color::FromArgb(232, 243, 255),  // top color
					System::Drawing::Color::LightSkyBlue,                    // bottom color
					System::Drawing::Drawing2D::LinearGradientMode::Vertical
				);
			e->Graphics->FillRectangle(brush, rect);
	}
};
}  // Close namespace Payroll