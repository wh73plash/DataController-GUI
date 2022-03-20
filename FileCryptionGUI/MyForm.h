#pragma once
#pragma region include
#include "toxic.h"
#pragma endregion

namespace FileCryptionGUI {
	using namespace System;
	using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;
	using namespace cliext;
	using namespace System::Threading;
	using namespace Microsoft::VisualBasic;

	/// <summary>
	/// MyForm에 대한 요약입니다.
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form {
	public:
		MyForm(void) {
			InitializeComponent( );
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
		}
	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~MyForm( ) {
			if (components) {
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ main_tbc;
	private: System::Windows::Forms::TabPage^ file_cryption_tab;
	protected:

	private: System::Windows::Forms::TabPage^ setting_tab;
	private: System::Windows::Forms::Button^ set_path_btn;
	private: System::Windows::Forms::TextBox^ path;
	private: System::Windows::Forms::RadioButton^ file_select;
	private: System::Windows::Forms::RadioButton^ folder_select;

	private: System::Windows::Forms::ProgressBar^ progressBar;
	private: System::Windows::Forms::Button^ run_btn;
	public: System::Windows::Forms::ListBox^ logs;
	private: System::Windows::Forms::Button^ passcode_chage_btn;
	public:
	private: System::Windows::Forms::TextBox^ passcode;
	private: System::Windows::Forms::Label^ label1;


	public:

	public:
	private:


	private:


	private:
		/// <summary>
		/// 필수 디자이너 변수입니다.
		/// </summary>
		System::ComponentModel::Container^ components;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// 디자이너 지원에 필요한 메서드입니다. 
		/// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
		/// </summary>
		void InitializeComponent(void) {
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->main_tbc = (gcnew System::Windows::Forms::TabControl( ));
			this->file_cryption_tab = (gcnew System::Windows::Forms::TabPage( ));
			this->label1 = (gcnew System::Windows::Forms::Label( ));
			this->passcode_chage_btn = (gcnew System::Windows::Forms::Button( ));
			this->passcode = (gcnew System::Windows::Forms::TextBox( ));
			this->logs = (gcnew System::Windows::Forms::ListBox( ));
			this->file_select = (gcnew System::Windows::Forms::RadioButton( ));
			this->folder_select = (gcnew System::Windows::Forms::RadioButton( ));
			this->progressBar = (gcnew System::Windows::Forms::ProgressBar( ));
			this->run_btn = (gcnew System::Windows::Forms::Button( ));
			this->set_path_btn = (gcnew System::Windows::Forms::Button( ));
			this->path = (gcnew System::Windows::Forms::TextBox( ));
			this->setting_tab = (gcnew System::Windows::Forms::TabPage( ));
			this->main_tbc->SuspendLayout( );
			this->file_cryption_tab->SuspendLayout( );
			this->SuspendLayout( );
			// 
			// main_tbc
			// 
			this->main_tbc->Controls->Add(this->file_cryption_tab);
			this->main_tbc->Controls->Add(this->setting_tab);
			this->main_tbc->Dock = System::Windows::Forms::DockStyle::Fill;
			this->main_tbc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->main_tbc->Location = System::Drawing::Point(0, 0);
			this->main_tbc->Name = L"main_tbc";
			this->main_tbc->SelectedIndex = 0;
			this->main_tbc->Size = System::Drawing::Size(842, 562);
			this->main_tbc->TabIndex = 0;
			// 
			// file_cryption_tab
			// 
			this->file_cryption_tab->Controls->Add(this->label1);
			this->file_cryption_tab->Controls->Add(this->passcode_chage_btn);
			this->file_cryption_tab->Controls->Add(this->passcode);
			this->file_cryption_tab->Controls->Add(this->logs);
			this->file_cryption_tab->Controls->Add(this->file_select);
			this->file_cryption_tab->Controls->Add(this->folder_select);
			this->file_cryption_tab->Controls->Add(this->progressBar);
			this->file_cryption_tab->Controls->Add(this->run_btn);
			this->file_cryption_tab->Controls->Add(this->set_path_btn);
			this->file_cryption_tab->Controls->Add(this->path);
			this->file_cryption_tab->Location = System::Drawing::Point(4, 25);
			this->file_cryption_tab->Name = L"file_cryption_tab";
			this->file_cryption_tab->Padding = System::Windows::Forms::Padding(3, 3, 3, 3);
			this->file_cryption_tab->Size = System::Drawing::Size(834, 533);
			this->file_cryption_tab->TabIndex = 0;
			this->file_cryption_tab->Text = L"File Control";
			this->file_cryption_tab->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(5, 356);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 16);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Current Key";
			// 
			// passcode_chage_btn
			// 
			this->passcode_chage_btn->Location = System::Drawing::Point(563, 489);
			this->passcode_chage_btn->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->passcode_chage_btn->Name = L"passcode_chage_btn";
			this->passcode_chage_btn->Size = System::Drawing::Size(170, 38);
			this->passcode_chage_btn->TabIndex = 9;
			this->passcode_chage_btn->Text = L"Current Key Change";
			this->passcode_chage_btn->UseVisualStyleBackColor = true;
			this->passcode_chage_btn->Click += gcnew System::EventHandler(this, &MyForm::passcode_chage_btn_Click_1);
			// 
			// passcode
			// 
			this->passcode->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->passcode->Enabled = false;
			this->passcode->Location = System::Drawing::Point(4, 374);
			this->passcode->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->passcode->Multiline = true;
			this->passcode->Name = L"passcode";
			this->passcode->PasswordChar = 'O';
			this->passcode->Size = System::Drawing::Size(826, 111);
			this->passcode->TabIndex = 8;
			this->passcode->TextChanged += gcnew System::EventHandler(this, &MyForm::passcode_TextChanged);
			// 
			// logs
			// 
			this->logs->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->logs->FormattingEnabled = true;
			this->logs->ItemHeight = 16;
			this->logs->Location = System::Drawing::Point(4, 36);
			this->logs->Name = L"logs";
			this->logs->Size = System::Drawing::Size(826, 274);
			this->logs->TabIndex = 7;
			this->logs->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::logs_SelectedIndexChanged);
			// 
			// file_select
			// 
			this->file_select->AutoSize = true;
			this->file_select->Location = System::Drawing::Point(781, 7);
			this->file_select->Name = L"file_select";
			this->file_select->Size = System::Drawing::Size(47, 20);
			this->file_select->TabIndex = 6;
			this->file_select->Text = L"File";
			this->file_select->UseVisualStyleBackColor = true;
			this->file_select->CheckedChanged += gcnew System::EventHandler(this, &MyForm::file_select_CheckedChanged);
			// 
			// folder_select
			// 
			this->folder_select->AutoSize = true;
			this->folder_select->Checked = true;
			this->folder_select->Location = System::Drawing::Point(711, 7);
			this->folder_select->Name = L"folder_select";
			this->folder_select->Size = System::Drawing::Size(64, 20);
			this->folder_select->TabIndex = 5;
			this->folder_select->TabStop = true;
			this->folder_select->Text = L"Folder";
			this->folder_select->UseVisualStyleBackColor = true;
			this->folder_select->CheckedChanged += gcnew System::EventHandler(this, &MyForm::folder_select_CheckedChanged);
			// 
			// progressBar
			// 
			this->progressBar->Location = System::Drawing::Point(5, 318);
			this->progressBar->Name = L"progressBar";
			this->progressBar->Size = System::Drawing::Size(824, 24);
			this->progressBar->TabIndex = 3;
			// 
			// run_btn
			// 
			this->run_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->run_btn->Location = System::Drawing::Point(738, 489);
			this->run_btn->Name = L"run_btn";
			this->run_btn->Size = System::Drawing::Size(92, 38);
			this->run_btn->TabIndex = 2;
			this->run_btn->Text = L"Start";
			this->run_btn->UseVisualStyleBackColor = true;
			this->run_btn->Click += gcnew System::EventHandler(this, &MyForm::run_btn_Click);
			// 
			// set_path_btn
			// 
			this->set_path_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->set_path_btn->Location = System::Drawing::Point(582, 6);
			this->set_path_btn->Name = L"set_path_btn";
			this->set_path_btn->Size = System::Drawing::Size(123, 24);
			this->set_path_btn->TabIndex = 1;
			this->set_path_btn->Text = L"Select Folder";
			this->set_path_btn->UseVisualStyleBackColor = true;
			this->set_path_btn->Click += gcnew System::EventHandler(this, &MyForm::set_path_btn_Click);
			// 
			// path
			// 
			this->path->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->path->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->path->Location = System::Drawing::Point(4, 6);
			this->path->Multiline = true;
			this->path->Name = L"path";
			this->path->ReadOnly = true;
			this->path->ScrollBars = System::Windows::Forms::ScrollBars::Horizontal;
			this->path->Size = System::Drawing::Size(572, 24);
			this->path->TabIndex = 0;
			// 
			// setting_tab
			// 
			this->setting_tab->Location = System::Drawing::Point(4, 25);
			this->setting_tab->Name = L"setting_tab";
			this->setting_tab->Padding = System::Windows::Forms::Padding(3, 3, 3, 3);
			this->setting_tab->Size = System::Drawing::Size(834, 533);
			this->setting_tab->TabIndex = 1;
			this->setting_tab->Text = L"Setting";
			this->setting_tab->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->ClientSize = System::Drawing::Size(842, 562);
			this->Controls->Add(this->main_tbc);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Data Controller";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->main_tbc->ResumeLayout(false);
			this->file_cryption_tab->ResumeLayout(false);
			this->file_cryption_tab->PerformLayout( );
			this->ResumeLayout(false);

		}
#pragma endregion
	private: bool is_file = false;

	private: System::Void set_path_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			bool buffer_boolean = false;
			if (folder_select->Checked) {
				FolderBrowserDialog^ fp = gcnew FolderBrowserDialog( );
				if (fp->ShowDialog( ) == System::Windows::Forms::DialogResult::OK) {
					path->Text = fp->SelectedPath;
				}
				buffer_boolean = !buffer_boolean;
				is_file = false;
			} else if (file_select->Checked) {
				OpenFileDialog^ fp = gcnew OpenFileDialog( );
				fp->InitialDirectory = System::IO::Directory::GetCurrentDirectory( );
				fp->Filter = "All files (*.*)|*.*";
				fp->RestoreDirectory = true;

				if (fp->ShowDialog( ) == System::Windows::Forms::DialogResult::OK) {
					path->Text = fp->FileName;
				}
				buffer_boolean = !buffer_boolean;
				is_file = true;
			}
			if (!buffer_boolean) {
				MessageBox::Show("Please select Option", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
			path->SelectionStart = path->Text->Length;
			path->ScrollToCaret( );
			return;
		} catch (std::exception ex) {

		}
	}

	public: static list<String^>^ target_arr;

	public: static BOOL processfn(std::string str) {
		String^ string_buffer = gcnew String(str.c_str( ));
		target_arr->push_back(string_buffer);
		return EXIT_SUCCESS;
	}

	public: System::Void threadfn( ) {
		int a = 0;
		for each (String ^ var in target_arr) {
			logs->Items->Add((++a).ToString( ) + "/" + target_arr->size( ).ToString( ) + "  " + var + "(De)Crypted");
			toxic::tfile::Filecrypt((char*)(void*)Marshal::StringToHGlobalAnsi(var));
			progressBar->PerformStep( );
			logs->SelectedIndex = logs->Items->Count - 1;
		}
		MessageBox::Show("Successfully finished to (De)Crypt the Files", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	public: System::Void run_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (path->Text == String::Empty) {
			MessageBox::Show("Please specify the Folder(File) path", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		} else if (is_file) {
			logs->Items->Clear( );
			progressBar->Visible = true;
			progressBar->Minimum = 1;
			progressBar->Maximum = 2;
			char* buffer = (char*)(void*)Marshal::StringToHGlobalAnsi(path->Text);
			BOOL result = toxic::tfile::Filecrypt(buffer);
			logs->Items->Add(path->Text + "(De)Crypted");
			progressBar->Value = 1;
			progressBar->Step = 1;
			progressBar->PerformStep( );
			if (result == EXIT_FAILURE) {
				MessageBox::Show("File Open Error", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			} else if (result == EXIT_SUCCESS) {
				MessageBox::Show("Successfully finished to (De)Crypt the File", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		} else {
			logs->Items->Clear( );
			char* buffer = (char*)(void*)Marshal::StringToHGlobalAnsi(path->Text);
			target_arr = gcnew list<String^>( );
			toxic::tfile::SearchingSubFiles(buffer, allow_file_list, processfn);
			progressBar->Visible = true;
			progressBar->Minimum = 1;
			progressBar->Maximum = target_arr->size( );
			progressBar->Value = 1;
			progressBar->Step = 1;
			Tasks::TaskFactory^ tf = gcnew Tasks::TaskFactory( );
			Tasks::Task^ myTask = tf->StartNew(gcnew System::Action(this, &MyForm::threadfn));
		}
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		std::time_t current = std::time(NULL);
		struct std::tm* pLocal = std::localtime(&current);

		std::ifstream fp;
		fp.open("data.db");
		if (fp.is_open( )) {
			std::string buffer_str;
			while (!fp.eof( )) {
				char buffer[1024];
				fp.getline(buffer, sizeof(buffer));
				buffer_str += buffer;
			}
			standard_passcode = buffer_str;
			passcode->Text = gcnew String(buffer_str.c_str( ));;
		} else {
			MessageBox::Show("DataBase data load error\n\nClosing...", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			Application::Exit( );
		}
	}
	private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		std::ofstream fp;
		fp.open("data.db");
		if (fp.is_open( )) {
			fp.clear( );
			fp << standard_passcode;
		} else {
			MessageBox::Show("DataBase save error", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void passcode_chage_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (passcode_chage_btn->Text == "Change") {
			passcode->Enabled = true;
			passcode_chage_btn->Text = "Modify";
		} else {
			passcode->Enabled = false;
			passcode_chage_btn->Text = "Change";
			standard_passcode = (char*)(void*)Marshal::StringToHGlobalAnsi(passcode->Text);
		}
	}
	private: System::Void passcode_TextChanged(System::Object^ sender, System::EventArgs^ e) { }
	private: System::Void passcode_chage_btn_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (passcode_chage_btn->Text == "Current Key Change") {
			passcode->Enabled = true;
			passcode_chage_btn->Text = "Modify";
			passcode->PasswordChar = NULL;
		} else {
			passcode->Enabled = false;
			passcode_chage_btn->Text = "Current Key Change";
			passcode->PasswordChar = 'O';
			standard_passcode = (char*)(void*)Marshal::StringToHGlobalAnsi(passcode->Text);
		}
	}
	private: System::Void file_select_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		set_path_btn->Text = "Select File";
	}
	private: System::Void folder_select_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		set_path_btn->Text = "Select Folder";
	}
	private: System::Void logs_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) { }
	};
}