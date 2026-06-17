#pragma once
#include "Database.h"
#include <msclr/marshal_cppstd.h>

namespace Payroll {

	using namespace msclr::interop;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing::Drawing2D;

	/// <summary>
	/// Summary for EmployeeForm
	/// </summary>
	public ref class EmployeeForm : public System::Windows::Forms::Form
	{
	public:
		EmployeeForm(void)
		{
			InitializeComponent();

		}
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ EmpID;
	public:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ employee_code;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FullNameOfTheEmployee;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Position;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Deparment;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DailyRate;
	private: System::Windows::Forms::TextBox^ empcode_txtbox;
	private: System::Windows::Forms::Label^ employeename_lbl;

	public:






	public:






	private:
		int empIdHidden = 0;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>private:

		~EmployeeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ employeemangement_lbl;
	private: System::Windows::Forms::Panel^ payroll_pnl;
	private: System::Windows::Forms::TextBox^ fulname_txtbox;

	private: System::Windows::Forms::TextBox^ position_txtbox;
	private: System::Windows::Forms::TextBox^ department_txtbox;



	private: System::Windows::Forms::Label^ dailyrate_lbl;

	private: System::Windows::Forms::Label^ Department;

	private: System::Windows::Forms::Label^ Position_lbl;

	private: System::Windows::Forms::Label^ FulName_lbl;
	private: System::Windows::Forms::Button^ add_btn;
	private: System::Windows::Forms::Button^ update_btn;
	private: System::Windows::Forms::Button^ delete_btn;


	private: System::Windows::Forms::Button^ clear_btn;
	private: System::Windows::Forms::Label^ employeelists_lbl;
	private: System::Windows::Forms::DataGridView^ EmployeeListDataGrid;






		   // back button
	private: System::Windows::Forms::Button^ back_btn;
	private: System::Windows::Forms::MaskedTextBox^ dailyrate_txtbox;















	protected:

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->employeemangement_lbl = (gcnew System::Windows::Forms::Label());
			this->payroll_pnl = (gcnew System::Windows::Forms::Panel());
			this->dailyrate_txtbox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->fulname_txtbox = (gcnew System::Windows::Forms::TextBox());
			this->position_txtbox = (gcnew System::Windows::Forms::TextBox());
			this->department_txtbox = (gcnew System::Windows::Forms::TextBox());
			this->dailyrate_lbl = (gcnew System::Windows::Forms::Label());
			this->Department = (gcnew System::Windows::Forms::Label());
			this->Position_lbl = (gcnew System::Windows::Forms::Label());
			this->FulName_lbl = (gcnew System::Windows::Forms::Label());
			this->add_btn = (gcnew System::Windows::Forms::Button());
			this->update_btn = (gcnew System::Windows::Forms::Button());
			this->delete_btn = (gcnew System::Windows::Forms::Button());
			this->clear_btn = (gcnew System::Windows::Forms::Button());
			this->employeelists_lbl = (gcnew System::Windows::Forms::Label());
			this->EmployeeListDataGrid = (gcnew System::Windows::Forms::DataGridView());
			this->EmpID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->employee_code = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->FullNameOfTheEmployee = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Position = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Deparment = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DailyRate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->back_btn = (gcnew System::Windows::Forms::Button());
			this->employeename_lbl = (gcnew System::Windows::Forms::Label());
			this->empcode_txtbox = (gcnew System::Windows::Forms::TextBox());
			this->payroll_pnl->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EmployeeListDataGrid))->BeginInit();
			this->SuspendLayout();
			// 
			// employeemangement_lbl
			// 
			this->employeemangement_lbl->AutoSize = true;
			this->employeemangement_lbl->BackColor = System::Drawing::Color::Transparent;
			this->employeemangement_lbl->Font = (gcnew System::Drawing::Font(L"Poppins", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->employeemangement_lbl->Location = System::Drawing::Point(41, 75);
			this->employeemangement_lbl->Name = L"employeemangement_lbl";
			this->employeemangement_lbl->Size = System::Drawing::Size(366, 50);
			this->employeemangement_lbl->TabIndex = 2;
			this->employeemangement_lbl->Text = L"Employee Management";
			// 
			// payroll_pnl
			// 
			this->payroll_pnl->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->payroll_pnl->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->payroll_pnl->Controls->Add(this->empcode_txtbox);
			this->payroll_pnl->Controls->Add(this->employeename_lbl);
			this->payroll_pnl->Controls->Add(this->dailyrate_txtbox);
			this->payroll_pnl->Controls->Add(this->fulname_txtbox);
			this->payroll_pnl->Controls->Add(this->position_txtbox);
			this->payroll_pnl->Controls->Add(this->department_txtbox);
			this->payroll_pnl->Controls->Add(this->dailyrate_lbl);
			this->payroll_pnl->Controls->Add(this->Department);
			this->payroll_pnl->Controls->Add(this->Position_lbl);
			this->payroll_pnl->Controls->Add(this->FulName_lbl);
			this->payroll_pnl->Location = System::Drawing::Point(59, 140);
			this->payroll_pnl->Name = L"payroll_pnl";
			this->payroll_pnl->Size = System::Drawing::Size(802, 274);
			this->payroll_pnl->TabIndex = 12;
			this->payroll_pnl->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &EmployeeForm::payroll_pnl_Paint);
			// 
			// dailyrate_txtbox
			// 
			this->dailyrate_txtbox->Location = System::Drawing::Point(335, 218);
			this->dailyrate_txtbox->Mask = L"99999.99";
			this->dailyrate_txtbox->Name = L"dailyrate_txtbox";
			this->dailyrate_txtbox->Size = System::Drawing::Size(259, 22);
			this->dailyrate_txtbox->TabIndex = 4;
			// 
			// fulname_txtbox
			// 
			this->fulname_txtbox->Font = (gcnew System::Drawing::Font(L"Nunito", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fulname_txtbox->Location = System::Drawing::Point(32, 128);
			this->fulname_txtbox->Multiline = true;
			this->fulname_txtbox->Name = L"fulname_txtbox";
			this->fulname_txtbox->Size = System::Drawing::Size(259, 38);
			this->fulname_txtbox->TabIndex = 1;
			// 
			// position_txtbox
			// 
			this->position_txtbox->Font = (gcnew System::Drawing::Font(L"Nunito", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->position_txtbox->Location = System::Drawing::Point(335, 128);
			this->position_txtbox->Multiline = true;
			this->position_txtbox->Name = L"position_txtbox";
			this->position_txtbox->Size = System::Drawing::Size(259, 38);
			this->position_txtbox->TabIndex = 2;
			// 
			// department_txtbox
			// 
			this->department_txtbox->Font = (gcnew System::Drawing::Font(L"Nunito", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->department_txtbox->Location = System::Drawing::Point(32, 202);
			this->department_txtbox->Multiline = true;
			this->department_txtbox->Name = L"department_txtbox";
			this->department_txtbox->Size = System::Drawing::Size(259, 38);
			this->department_txtbox->TabIndex = 3;
			// 
			// dailyrate_lbl
			// 
			this->dailyrate_lbl->AutoSize = true;
			this->dailyrate_lbl->Font = (gcnew System::Drawing::Font(L"Nunito", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dailyrate_lbl->Location = System::Drawing::Point(332, 180);
			this->dailyrate_lbl->Name = L"dailyrate_lbl";
			this->dailyrate_lbl->Size = System::Drawing::Size(78, 20);
			this->dailyrate_lbl->TabIndex = 3;
			this->dailyrate_lbl->Text = L"Daily Rate";
			// 
			// Department
			// 
			this->Department->AutoSize = true;
			this->Department->Location = System::Drawing::Point(30, 180);
			this->Department->Name = L"Department";
			this->Department->Size = System::Drawing::Size(77, 16);
			this->Department->TabIndex = 2;
			this->Department->Text = L"Department";
			// 
			// Position_lbl
			// 
			this->Position_lbl->AutoSize = true;
			this->Position_lbl->Font = (gcnew System::Drawing::Font(L"Nunito", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Position_lbl->Location = System::Drawing::Point(332, 98);
			this->Position_lbl->Name = L"Position_lbl";
			this->Position_lbl->Size = System::Drawing::Size(61, 20);
			this->Position_lbl->TabIndex = 1;
			this->Position_lbl->Text = L"Position";
			// 
			// FulName_lbl
			// 
			this->FulName_lbl->AutoSize = true;
			this->FulName_lbl->Location = System::Drawing::Point(30, 101);
			this->FulName_lbl->Name = L"FulName_lbl";
			this->FulName_lbl->Size = System::Drawing::Size(68, 16);
			this->FulName_lbl->TabIndex = 0;
			this->FulName_lbl->Text = L"Full Name";
			// 
			// add_btn
			// 
			this->add_btn->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->add_btn->Font = (gcnew System::Drawing::Font(L"Poppins", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_btn->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->add_btn->Location = System::Drawing::Point(158, 453);
			this->add_btn->Name = L"add_btn";
			this->add_btn->Size = System::Drawing::Size(144, 47);
			this->add_btn->TabIndex = 5;
			this->add_btn->Text = L"Add";
			this->add_btn->UseVisualStyleBackColor = true;
			this->add_btn->Click += gcnew System::EventHandler(this, &EmployeeForm::button1_Click);
			// 
			// update_btn
			// 
			this->update_btn->Font = (gcnew System::Drawing::Font(L"Poppins", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->update_btn->Location = System::Drawing::Point(309, 453);
			this->update_btn->Name = L"update_btn";
			this->update_btn->Size = System::Drawing::Size(162, 47);
			this->update_btn->TabIndex = 6;
			this->update_btn->Text = L"Update";
			this->update_btn->UseVisualStyleBackColor = true;
			this->update_btn->Click += gcnew System::EventHandler(this, &EmployeeForm::update_btn_Click);
			// 
			// delete_btn
			// 
			this->delete_btn->Font = (gcnew System::Drawing::Font(L"Poppins", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->delete_btn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->delete_btn->Location = System::Drawing::Point(475, 453);
			this->delete_btn->Name = L"delete_btn";
			this->delete_btn->Size = System::Drawing::Size(155, 47);
			this->delete_btn->TabIndex = 7;
			this->delete_btn->Text = L"Delete";
			this->delete_btn->UseVisualStyleBackColor = true;
			this->delete_btn->Click += gcnew System::EventHandler(this, &EmployeeForm::button3_Click);
			// 
			// clear_btn
			// 
			this->clear_btn->Font = (gcnew System::Drawing::Font(L"Poppins", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clear_btn->Location = System::Drawing::Point(638, 453);
			this->clear_btn->Name = L"clear_btn";
			this->clear_btn->Size = System::Drawing::Size(145, 47);
			this->clear_btn->TabIndex = 8;
			this->clear_btn->Text = L"Clear";
			this->clear_btn->UseVisualStyleBackColor = true;
			this->clear_btn->Click += gcnew System::EventHandler(this, &EmployeeForm::clear_btn_Click);
			// 
			// employeelists_lbl
			// 
			this->employeelists_lbl->AutoSize = true;
			this->employeelists_lbl->BackColor = System::Drawing::Color::Transparent;
			this->employeelists_lbl->Font = (gcnew System::Drawing::Font(L"Poppins Medium", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->employeelists_lbl->Location = System::Drawing::Point(45, 543);
			this->employeelists_lbl->Name = L"employeelists_lbl";
			this->employeelists_lbl->Size = System::Drawing::Size(151, 30);
			this->employeelists_lbl->TabIndex = 17;
			this->employeelists_lbl->Text = L"Employee Lists";
			// 
			// EmployeeListDataGrid
			// 
			this->EmployeeListDataGrid->BackgroundColor = System::Drawing::SystemColors::InactiveBorder;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->EmployeeListDataGrid->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->EmployeeListDataGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->EmployeeListDataGrid->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->EmpID,
					this->employee_code, this->FullNameOfTheEmployee, this->Position, this->Deparment, this->DailyRate
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->EmployeeListDataGrid->DefaultCellStyle = dataGridViewCellStyle2;
			this->EmployeeListDataGrid->Location = System::Drawing::Point(59, 585);
			this->EmployeeListDataGrid->Name = L"EmployeeListDataGrid";
			this->EmployeeListDataGrid->RowHeadersWidth = 51;
			this->EmployeeListDataGrid->RowTemplate->Height = 24;
			this->EmployeeListDataGrid->Size = System::Drawing::Size(802, 212);
			this->EmployeeListDataGrid->TabIndex = 9;
			this->EmployeeListDataGrid->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &EmployeeForm::EmployeeListDataGrid_CellClick);
			// 
			// EmpID
			// 
			this->EmpID->HeaderText = L"ID";
			this->EmpID->MinimumWidth = 6;
			this->EmpID->Name = L"EmpID";
			this->EmpID->ReadOnly = true;
			this->EmpID->Width = 125;
			// 
			// employee_code
			// 
			this->employee_code->HeaderText = L"Employee Code";
			this->employee_code->MinimumWidth = 6;
			this->employee_code->Name = L"employee_code";
			this->employee_code->ReadOnly = true;
			this->employee_code->Width = 125;
			// 
			// FullNameOfTheEmployee
			// 
			this->FullNameOfTheEmployee->HeaderText = L"Full Name";
			this->FullNameOfTheEmployee->MinimumWidth = 6;
			this->FullNameOfTheEmployee->Name = L"FullNameOfTheEmployee";
			this->FullNameOfTheEmployee->ReadOnly = true;
			this->FullNameOfTheEmployee->Width = 125;
			// 
			// Position
			// 
			this->Position->HeaderText = L"Position";
			this->Position->MinimumWidth = 6;
			this->Position->Name = L"Position";
			this->Position->ReadOnly = true;
			this->Position->Width = 125;
			// 
			// Deparment
			// 
			this->Deparment->HeaderText = L"Department";
			this->Deparment->MinimumWidth = 6;
			this->Deparment->Name = L"Deparment";
			this->Deparment->ReadOnly = true;
			this->Deparment->Width = 125;
			// 
			// DailyRate
			// 
			this->DailyRate->HeaderText = L"Daily Rate";
			this->DailyRate->MinimumWidth = 6;
			this->DailyRate->Name = L"DailyRate";
			this->DailyRate->ReadOnly = true;
			this->DailyRate->Width = 125;
			// 
			// back_btn
			// 
			this->back_btn->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->back_btn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->back_btn->Location = System::Drawing::Point(22, 22);
			this->back_btn->Name = L"back_btn";
			this->back_btn->Size = System::Drawing::Size(67, 29);
			this->back_btn->TabIndex = 10;
			this->back_btn->Text = L"Back";
			this->back_btn->UseVisualStyleBackColor = false;
			this->back_btn->Click += gcnew System::EventHandler(this, &EmployeeForm::back_btn_Click);
			// 
			// employeename_lbl
			// 
			this->employeename_lbl->AutoSize = true;
			this->employeename_lbl->Location = System::Drawing::Point(28, 16);
			this->employeename_lbl->Name = L"employeename_lbl";
			this->employeename_lbl->Size = System::Drawing::Size(105, 16);
			this->employeename_lbl->TabIndex = 6;
			this->employeename_lbl->Text = L"Employee Code";
			// 
			// empcode_txtbox
			// 
			this->empcode_txtbox->Font = (gcnew System::Drawing::Font(L"Nunito", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->empcode_txtbox->Location = System::Drawing::Point(31, 43);
			this->empcode_txtbox->Multiline = true;
			this->empcode_txtbox->Name = L"empcode_txtbox";
			this->empcode_txtbox->ReadOnly = true;
			this->empcode_txtbox->Size = System::Drawing::Size(259, 38);
			this->empcode_txtbox->TabIndex = 0;
			// 
			// EmployeeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(915, 843);
			this->Controls->Add(this->EmployeeListDataGrid);
			this->Controls->Add(this->employeelists_lbl);
			this->Controls->Add(this->clear_btn);
			this->Controls->Add(this->delete_btn);
			this->Controls->Add(this->update_btn);
			this->Controls->Add(this->add_btn);
			this->Controls->Add(this->payroll_pnl);
			this->Controls->Add(this->employeemangement_lbl);
			this->Controls->Add(this->back_btn);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"EmployeeForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"EmployeeForm";
			this->Load += gcnew System::EventHandler(this, &EmployeeForm::EmployeeForm_Load);
			this->payroll_pnl->ResumeLayout(false);
			this->payroll_pnl->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->EmployeeListDataGrid))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			// GET INPUT FROM TEXTBOXES (emp_code removed - now auto-generated)
			String^ full_name = fulname_txtbox->Text;
			String^ position = position_txtbox->Text;
			String^ department = department_txtbox->Text;
			String^ daily_rate_str = dailyrate_txtbox->Text;

			// VALIDATION: CHECK ALL FIELDS ARE FILLED
			if (full_name->Length == 0) {
				MessageBox::Show("Please enter Full Name!", "Validation Error");
				fulname_txtbox->Focus();
				return;
			}

			if (position->Length == 0) {
				MessageBox::Show("Please enter Position!", "Validation Error");
				position_txtbox->Focus();
				return;
			}

			if (department->Length == 0) {
				MessageBox::Show("Please enter Department!", "Validation Error");
				department_txtbox->Focus();
				return;
			}

			if (daily_rate_str->Length == 0) {
				MessageBox::Show("Please enter Daily Rate!", "Validation Error");
				dailyrate_txtbox->Focus();
				return;
			}

			// TRY TO CONVERT DAILY RATE TO DOUBLE
			double rate = System::Convert::ToDouble(daily_rate_str);

			// VALIDATE: DAILY RATE MUST BE POSITIVE
			if (rate <= 0) {
				MessageBox::Show("Daily Rate must be greater than 0!", "Validation Error");
				dailyrate_txtbox->Focus();
				dailyrate_txtbox->SelectAll();
				return;
			}

			// CONVERT MANAGED STRINGS TO C++ STRINGS
			marshal_context context;
			std::string name_str = context.marshal_as<std::string>(full_name);
			std::string pos_str = context.marshal_as<std::string>(position);
			std::string dept_str = context.marshal_as<std::string>(department);

			// CONNECT TO DATABASE AND ADD EMPLOYEE
			// NOTE: emp_code is now AUTO-GENERATED (no longer passed as parameter)
			Database db;
			if (db.Connect()) {
				if (db.AddEmployee(name_str.c_str(), pos_str.c_str(),
					dept_str.c_str(), rate)) {
					MessageBox::Show("Employee added successfully", "Success");
					LoadEmployees();  // REFRESH THE DATAGRIDVIEW
					ClearFields();    // CLEAR INPUT FIELDS
				}
				else {
					System::String^ err = gcnew System::String(db.GetLastError().c_str());
					MessageBox::Show("Error adding employee: " + err, "Database Error");
				}
			}
			else {
				MessageBox::Show("Cannot connect to database!", "Connection Error");
			}
		}
		catch (System::FormatException^) {
			MessageBox::Show("Daily Rate must be a valid number! Example: 2000.50", "Input Error");
			dailyrate_txtbox->Focus();
			dailyrate_txtbox->SelectAll();
		}
		catch (System::OverflowException^) {
			MessageBox::Show("Daily Rate number is too large!", "Input Error");
			dailyrate_txtbox->Focus();
		}
		catch (System::Exception^ ex) {
			MessageBox::Show("Unexpected error: " + ex->Message, "Error");
		}

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (EmployeeListDataGrid->SelectedRows->Count == 0) {
				MessageBox::Show("Please select an employee to delete!", "Validation Error");
				return;
			}

			int emp_id = System::Convert::ToInt32(EmployeeListDataGrid->SelectedRows[0]->Cells[0]->Value);
			String^ emp_name = System::Convert::ToString(EmployeeListDataGrid->SelectedRows[0]->Cells[2]->Value);

			// CONFIRM DELETE
			System::Windows::Forms::DialogResult result = MessageBox::Show(
				"Are you sure you want to delete " + emp_name + "?",
				"Confirm Delete",
				MessageBoxButtons::YesNo,
				MessageBoxIcon::Warning
			);

			if (result == System::Windows::Forms::DialogResult::Yes) {
				Database db;
				if (db.Connect()) {
					if (db.DeleteEmployee(emp_id)) {
						MessageBox::Show("Employee deleted successfully!", "Success");
						LoadEmployees();
						ClearFields();
					}
					else {
						System::String^ err = gcnew System::String(db.GetLastError().c_str());
						MessageBox::Show("Error deleting employee: " + err, "Database Error");
					}
				}
				else {
					MessageBox::Show("Cannot connect to database!", "Connection Error");
				}
			}
		}
		catch (System::Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message, "Error");
		}
	}
	private: System::Void back_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->Owner != nullptr) {
			this->Owner->Show();
		}
		this->Close();
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (this->Owner != nullptr) {
			this->Owner->Show();
		}
		this->Close();
	}

	private: System::Void LoadEmployees() {
		Database db;

		if (db.Connect()) {
			MYSQL_RES* result = db.GetAllEmployees();

			if (result) {
				EmployeeListDataGrid->Rows->Clear();

				MYSQL_ROW row;
				while ((row = mysql_fetch_row(result))) {
					EmployeeListDataGrid->Rows->Add(
						gcnew System::String(row[0]),  // emp_id
						gcnew System::String(row[1]),  // emp_code
						gcnew System::String(row[2]),  // full_name
						gcnew System::String(row[3]),  // position
						gcnew System::String(row[4]),  // department
						gcnew System::String(row[5])   // daily_rate
					);
				}

				mysql_free_result(result);
			}
		}
	}

	private: System::Void ClearFields() {
		empcode_txtbox->Text = "";
		fulname_txtbox->Text = "";
		position_txtbox->Text = "";
		department_txtbox->Text = "";
		dailyrate_txtbox->Text = "";
	}
	private: System::Void payroll_pnl_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

	private: System::Void EmployeeForm_Load(System::Object^ sender, System::EventArgs^ e) {
		LoadEmployees();
	}
	private: System::Void EmployeeListDataGrid_CellClick(System::Object^ sender,
		System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		try {
			if (e->RowIndex >= 0) {
				empIdHidden = System::Convert::ToInt32(EmployeeListDataGrid->Rows[e->RowIndex]->Cells[0]->Value);
				empcode_txtbox->Text = System::Convert::ToString(EmployeeListDataGrid->Rows[e->RowIndex]->Cells[1]->Value);
				fulname_txtbox->Text = System::Convert::ToString(EmployeeListDataGrid->Rows[e->RowIndex]->Cells[2]->Value);
				position_txtbox->Text = System::Convert::ToString(EmployeeListDataGrid->Rows[e->RowIndex]->Cells[3]->Value);
				department_txtbox->Text = System::Convert::ToString(EmployeeListDataGrid->Rows[e->RowIndex]->Cells[4]->Value);
				dailyrate_txtbox->Text = System::Convert::ToString(EmployeeListDataGrid->Rows[e->RowIndex]->Cells[5]->Value);
			}
		}
		catch (System::Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
	}
	private: System::Void update_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (empIdHidden <= 0) {
				MessageBox::Show("Select an employee to update!", "Validation Error");
				return;
			}

			String^ full_name = fulname_txtbox->Text;
			String^ position = position_txtbox->Text;
			String^ department = department_txtbox->Text;
			String^ daily_rate_str = dailyrate_txtbox->Text;

			if (full_name->Length == 0 || position->Length == 0 || department->Length == 0 || daily_rate_str->Length == 0) {
				MessageBox::Show("Fill all fields!", "Validation Error");
				return;
			}

			double rate = System::Convert::ToDouble(daily_rate_str);
			if (rate <= 0) {
				MessageBox::Show("Daily Rate > 0!", "Validation Error");
				return;
			}

			marshal_context context;
			std::string name_str = context.marshal_as<std::string>(full_name);
			std::string pos_str = context.marshal_as<std::string>(position);
			std::string dept_str = context.marshal_as<std::string>(department);

			Database db;
			if (db.Connect()) {
				if (db.UpdateEmployee(empIdHidden, name_str.c_str(), pos_str.c_str(), dept_str.c_str(), rate)) {
					MessageBox::Show("Updated!", "Success");
					LoadEmployees();
					ClearFields();
				}
				else {
					MessageBox::Show("Error updating!");
				}
			}
		}
		catch (System::Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
	}
	private: System::Void clear_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			empcode_txtbox->Text = "";
			fulname_txtbox->Text = "";
			position_txtbox->Text = "";
			department_txtbox->Text = "";
			dailyrate_txtbox->Text = "";
			empIdHidden = 0;  // RESET HIDDEN ID

			// Deselect DataGridView rows
			EmployeeListDataGrid->ClearSelection();

			MessageBox::Show("Fields cleared!", "Success");
		}
		catch (System::Exception^ ex) {
			MessageBox::Show("Error: " + ex->Message);
		}
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
}// Close namespace Payroll