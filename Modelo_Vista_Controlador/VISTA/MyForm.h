#pragma once

namespace VISTA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ TextBoxNombre;
	private: System::Windows::Forms::ComboBox^ ComboBoxNombre;
	private: System::Windows::Forms::Label^ labelNombres;
	private: System::Windows::Forms::Button^ BotonAnnadir;
	private: System::Windows::Forms::Button^ BotonBorrar;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxNum1;
	private: System::Windows::Forms::TextBox^ textBoxNum2;
	private: System::Windows::Forms::TextBox^ textBoxRespuesta;



	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ BotonMultiplicar;
	private: System::Windows::Forms::Button^ BotonSumar;
	private: System::Windows::Forms::Button^ BotonBorrarCalculadora;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->TextBoxNombre = (gcnew System::Windows::Forms::TextBox());
			this->ComboBoxNombre = (gcnew System::Windows::Forms::ComboBox());
			this->labelNombres = (gcnew System::Windows::Forms::Label());
			this->BotonAnnadir = (gcnew System::Windows::Forms::Button());
			this->BotonBorrar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxNum1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxNum2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxRespuesta = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->BotonMultiplicar = (gcnew System::Windows::Forms::Button());
			this->BotonSumar = (gcnew System::Windows::Forms::Button());
			this->BotonBorrarCalculadora = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(-20, -80);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 0;
			// 
			// TextBoxNombre
			// 
			this->TextBoxNombre->Location = System::Drawing::Point(67, 121);
			this->TextBoxNombre->Name = L"TextBoxNombre";
			this->TextBoxNombre->Size = System::Drawing::Size(121, 22);
			this->TextBoxNombre->TabIndex = 1;
			this->TextBoxNombre->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBoxNombre_TextChanged);
			// 
			// ComboBoxNombre
			// 
			this->ComboBoxNombre->FormattingEnabled = true;
			this->ComboBoxNombre->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"José", L"Juan", L"Mateo", L"NPC" });
			this->ComboBoxNombre->Location = System::Drawing::Point(67, 45);
			this->ComboBoxNombre->Name = L"ComboBoxNombre";
			this->ComboBoxNombre->Size = System::Drawing::Size(121, 24);
			this->ComboBoxNombre->TabIndex = 2;
			// 
			// labelNombres
			// 
			this->labelNombres->AutoSize = true;
			this->labelNombres->Location = System::Drawing::Point(111, 182);
			this->labelNombres->Name = L"labelNombres";
			this->labelNombres->Size = System::Drawing::Size(0, 17);
			this->labelNombres->TabIndex = 3;
			// 
			// BotonAnnadir
			// 
			this->BotonAnnadir->Location = System::Drawing::Point(90, 245);
			this->BotonAnnadir->Name = L"BotonAnnadir";
			this->BotonAnnadir->Size = System::Drawing::Size(75, 23);
			this->BotonAnnadir->TabIndex = 4;
			this->BotonAnnadir->Text = L"Añadir";
			this->BotonAnnadir->UseVisualStyleBackColor = true;
			this->BotonAnnadir->Click += gcnew System::EventHandler(this, &MyForm::BotonAnnadir_Click);
			// 
			// BotonBorrar
			// 
			this->BotonBorrar->Location = System::Drawing::Point(90, 312);
			this->BotonBorrar->Name = L"BotonBorrar";
			this->BotonBorrar->Size = System::Drawing::Size(75, 23);
			this->BotonBorrar->TabIndex = 5;
			this->BotonBorrar->Text = L"Borrar";
			this->BotonBorrar->UseVisualStyleBackColor = true;
			this->BotonBorrar->Click += gcnew System::EventHandler(this, &MyForm::BotonBorrar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(456, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 17);
			this->label1->TabIndex = 6;
			this->label1->Text = L"CALCULADORA";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(379, 69);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 17);
			this->label2->TabIndex = 7;
			this->label2->Text = L"NUMERO 1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(575, 69);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(81, 17);
			this->label3->TabIndex = 8;
			this->label3->Text = L"NUMERO 2";
			// 
			// textBoxNum1
			// 
			this->textBoxNum1->Location = System::Drawing::Point(366, 121);
			this->textBoxNum1->Name = L"textBoxNum1";
			this->textBoxNum1->Size = System::Drawing::Size(121, 22);
			this->textBoxNum1->TabIndex = 9;
			// 
			// textBoxNum2
			// 
			this->textBoxNum2->Location = System::Drawing::Point(559, 121);
			this->textBoxNum2->Name = L"textBoxNum2";
			this->textBoxNum2->Size = System::Drawing::Size(121, 22);
			this->textBoxNum2->TabIndex = 10;
			// 
			// textBoxRespuesta
			// 
			this->textBoxRespuesta->Location = System::Drawing::Point(366, 268);
			this->textBoxRespuesta->Name = L"textBoxRespuesta";
			this->textBoxRespuesta->Size = System::Drawing::Size(121, 22);
			this->textBoxRespuesta->TabIndex = 11;
			this->textBoxRespuesta->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(379, 219);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 17);
			this->label4->TabIndex = 12;
			this->label4->Text = L"RESPUESTA";
			// 
			// BotonMultiplicar
			// 
			this->BotonMultiplicar->Location = System::Drawing::Point(654, 219);
			this->BotonMultiplicar->Name = L"BotonMultiplicar";
			this->BotonMultiplicar->Size = System::Drawing::Size(115, 23);
			this->BotonMultiplicar->TabIndex = 14;
			this->BotonMultiplicar->Text = L"MULTIPLICAR";
			this->BotonMultiplicar->UseVisualStyleBackColor = true;
			this->BotonMultiplicar->Click += gcnew System::EventHandler(this, &MyForm::BotonMultiplicar_Click);
			// 
			// BotonSumar
			// 
			this->BotonSumar->Location = System::Drawing::Point(533, 219);
			this->BotonSumar->Name = L"BotonSumar";
			this->BotonSumar->Size = System::Drawing::Size(75, 23);
			this->BotonSumar->TabIndex = 13;
			this->BotonSumar->Text = L"SUMAR";
			this->BotonSumar->UseVisualStyleBackColor = true;
			this->BotonSumar->Click += gcnew System::EventHandler(this, &MyForm::BotonSumar_Click);
			// 
			// BotonBorrarCalculadora
			// 
			this->BotonBorrarCalculadora->Location = System::Drawing::Point(591, 267);
			this->BotonBorrarCalculadora->Name = L"BotonBorrarCalculadora";
			this->BotonBorrarCalculadora->Size = System::Drawing::Size(115, 23);
			this->BotonBorrarCalculadora->TabIndex = 15;
			this->BotonBorrarCalculadora->Text = L"BORRAR";
			this->BotonBorrarCalculadora->UseVisualStyleBackColor = true;
			this->BotonBorrarCalculadora->Click += gcnew System::EventHandler(this, &MyForm::BotonBorrarCalculadora_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(895, 448);
			this->Controls->Add(this->BotonBorrarCalculadora);
			this->Controls->Add(this->BotonMultiplicar);
			this->Controls->Add(this->BotonSumar);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBoxRespuesta);
			this->Controls->Add(this->textBoxNum2);
			this->Controls->Add(this->textBoxNum1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->BotonBorrar);
			this->Controls->Add(this->BotonAnnadir);
			this->Controls->Add(this->labelNombres);
			this->Controls->Add(this->ComboBoxNombre);
			this->Controls->Add(this->TextBoxNombre);
			this->Controls->Add(this->comboBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BotonAnnadir_Click(System::Object^ sender, System::EventArgs^ e) {
		TextBoxNombre->Text = ComboBoxNombre->Text;
		labelNombres->Text = "Funciona!";
	}


private: System::Void BotonBorrar_Click(System::Object^ sender, System::EventArgs^ e) {
	TextBoxNombre->Text = "";
	labelNombres->Text = "";
	ComboBoxNombre->Text = "";
}
private: System::Void TextBoxNombre_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void BotonSumar_Click(System::Object^ sender, System::EventArgs^ e) {
	textBoxRespuesta->Text = Convert::ToString(Convert::ToInt32(textBoxNum1->Text) + Convert::ToInt32(textBoxNum2->Text));
}
private: System::Void BotonMultiplicar_Click(System::Object^ sender, System::EventArgs^ e) {
	textBoxRespuesta->Text = Convert::ToString(Convert::ToInt32(textBoxNum1->Text) * Convert::ToInt32(textBoxNum2->Text));
}
private: System::Void BotonBorrarCalculadora_Click(System::Object^ sender, System::EventArgs^ e) {
	textBoxRespuesta->Text = "";
	textBoxNum1->Text = "";
	textBoxNum2->Text = "";
}
};
}
