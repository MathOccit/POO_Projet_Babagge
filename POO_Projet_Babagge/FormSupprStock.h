#pragma once
#include "ServiceStock.h"

namespace POO_Projet_Babagge {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de MyForm3
	/// </summary>
	public ref class FormSupprStock : public System::Windows::Forms::Form
	{
	public:
		FormSupprStock(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~FormSupprStock()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox_supp;

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ dataGridViewSupprStock;
	private: System::Windows::Forms::Button^ button3;
	private: String^ Recherche;
	private: System::Data::DataSet^ oDsSt;
	private: NS_Comp_Svc::ServiceStock^ oSvcSt;

	protected:

	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox_supp = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->dataGridViewSupprStock = (gcnew System::Windows::Forms::DataGridView());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSupprStock))->BeginInit();
			this->panel6->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(90)), static_cast<System::Int32>(static_cast<System::Byte>(137)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->panel2->Controls->Add(this->label1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(622, 70);
			this->panel2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(622, 70);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Supprimer un article";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nom de l\'article :";
			// 
			// textBox_supp
			// 
			this->textBox_supp->Location = System::Drawing::Point(97, 15);
			this->textBox_supp->Name = L"textBox_supp";
			this->textBox_supp->Size = System::Drawing::Size(117, 20);
			this->textBox_supp->TabIndex = 3;
			this->textBox_supp->TextChanged += gcnew System::EventHandler(this, &FormSupprStock::supp_changed);
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->button1);
			this->panel4->Controls->Add(this->textBox_supp);
			this->panel4->Controls->Add(this->label2);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(0, 70);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(622, 52);
			this->panel4->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(220, 15);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(27, 20);
			this->button1->TabIndex = 4;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &FormSupprStock::button1_Click);
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->dataGridViewSupprStock);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel5->Location = System::Drawing::Point(0, 122);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(622, 186);
			this->panel5->TabIndex = 6;
			// 
			// dataGridViewSupprStock
			// 
			this->dataGridViewSupprStock->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewSupprStock->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridViewSupprStock->Location = System::Drawing::Point(0, 0);
			this->dataGridViewSupprStock->Name = L"dataGridViewSupprStock";
			this->dataGridViewSupprStock->Size = System::Drawing::Size(622, 186);
			this->dataGridViewSupprStock->TabIndex = 0;
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->button2);
			this->panel6->Controls->Add(this->textBox2);
			this->panel6->Controls->Add(this->label3);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel6->Location = System::Drawing::Point(0, 308);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(622, 60);
			this->panel6->TabIndex = 7;
			// 
			// button2
			// 
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(185, 18);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(27, 20);
			this->button2->TabIndex = 4;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(143, 18);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(36, 20);
			this->textBox2->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(131, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"ID de l\'article a supprimer :";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(535, 433);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 21);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Supprimer";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &FormSupprStock::button3_Click_1);
			// 
			// FormSupprStock
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(622, 466);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel2);
			this->Name = L"FormSupprStock";
			this->Text = L"MyForm3";
			this->Load += gcnew System::EventHandler(this, &FormSupprStock::FormSupprStock_Load);
			this->panel2->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSupprStock))->EndInit();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion


private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{

}
private: System::Void supp_changed(System::Object^ sender, System::EventArgs^ e) {
	
 oSvcSt = gcnew NS_Comp_Svc::ServiceStock;


	this->oDsSt = this->oSvcSt->Rechercher(textBox_supp->Text,"Stock");
	this->dataGridViewSupprStock->DataSource = this->oDsSt;
	this->dataGridViewSupprStock->DataMember = "Stock";
	delete oSvcSt;
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) 
{
	oSvcSt = gcnew NS_Comp_Svc::ServiceStock;

	this->oSvcSt->SupprimerUnStock(textBox2->Text);
	this->Close();
}
private: System::Void FormSupprStock_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}