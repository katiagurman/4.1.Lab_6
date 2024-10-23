#pragma once
#include <string>
#include <cstdlib>  // для rand() і srand()
#include <ctime>    // для time()
namespace My41Lab6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridView^ dataGridView2;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(155, 66);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(158, 354);
			this->dataGridView1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(176, 450);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Розв\'язання";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(3, 3);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(480, 546);
			this->tabControl1->TabIndex = 2;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(472, 517);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Завдання 1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(51, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(383, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Знайти суму квадратів елементів одновимірного масиву.";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->dataGridView2);
			this->tabPage2->Controls->Add(this->textBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(472, 517);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Завдання 2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(61, 26);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(320, 40);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"Знайти суму елементів квадратної матриці, які знаходяться над головною діагоналлю"
				L".";
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(31, 91);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(384, 354);
			this->dataGridView2->TabIndex = 1;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(163, 466);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(132, 27);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Розв\'язання";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(486, 548);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->ColumnCount = 1;
		dataGridView1->Columns[0]->Name = "Value"; 
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int size = 10; 
		int* arr = new int[size]; 
		int sum_of_squares = 0;   

		srand((unsigned)time(0));

		// Заповнення масиву випадковими числами та обчислення суми квадратів
		for (int i = 0; i < size; i++) {
			arr[i] = rand() % 21 - 10; 
			sum_of_squares += arr[i] * arr[i]; 
		}

		dataGridView1->Rows->Clear();

		for (int i = 0; i < size; i++) {
			dataGridView1->Rows->Add(arr[i].ToString());
		}

		String^ message = String::Format("Сума квадратів елементів: {0}", sum_of_squares);
		MessageBox::Show(message);

		delete[] arr;
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	srand(static_cast<unsigned int>(time(0)));

	int rows = 4;
	int cols = 4;

	int** arr = new int* [rows];
	for (int i = 0; i < rows; i++) {
		arr[i] = new int[cols];
	}

	dataGridView2->RowCount = rows;
	dataGridView2->ColumnCount = cols;

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			arr[i][j] = rand() % 100;  
			dataGridView2->Rows[i]->Cells[j]->Value = arr[i][j];
		}
	}

	// Обчислення суми елементів над головною діагоналлю
	int sum = 0;
	for (int i = 0; i < rows; i++) {
		for (int j = i + 1; j < cols; j++) {  
			sum += arr[i][j];
		}
	}

	String^ message = String::Format("Сума елементів над головною діагоналлю: {0}", sum);
	MessageBox::Show(message);

	for (int i = 0; i < rows; i++) {
		delete[] arr[i];
	}
	delete[] arr;
}
};
}
