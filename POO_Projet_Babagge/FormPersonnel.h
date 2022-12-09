#pragma once
#include "pch.h"
#include "ServicePersonnel.h"
#include "FormSupprPrs.h"
#include "FormModifPrs.h"
#include "FormAjoutPrs.h"

namespace POO_Projet_Babagge {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de FormPersonnel
	/// </summary>
	public ref class FormPersonnel : public System::Windows::Forms::Form
	{
	public:
		FormPersonnel(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~FormPersonnel()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridViewPerso;
	protected:


	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Data::DataSet^ oDsPrs;
	private: NS_Comp_Svc::ServicePersonnel^ oSvcPrs = gcnew NS_Comp_Svc::ServicePersonnel;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: POO_Projet_Babagge::FormSupprPrs^ FormSupprPrs;
	private: POO_Projet_Babagge::FormModifPrs^ FormModifPrs;
	private: POO_Projet_Babagge::Inserer_Personnel^ insererPersonnel;
	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridViewPerso = (gcnew System::Windows::Forms::DataGridView());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewPerso))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridViewPerso
			// 
			this->dataGridViewPerso->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridViewPerso->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewPerso->Location = System::Drawing::Point(12, 12);
			this->dataGridViewPerso->Name = L"dataGridViewPerso";
			this->dataGridViewPerso->Size = System::Drawing::Size(691, 373);
			this->dataGridViewPerso->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Location = System::Drawing::Point(93, 394);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(173, 20);
			this->textBox1->TabIndex = 5;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &FormPersonnel::RchrchNmPrs);
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button4->Location = System::Drawing::Point(466, 392);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Inserer";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &FormPersonnel::button4_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button3->Location = System::Drawing::Point(547, 392);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Supprimer";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &FormPersonnel::button3_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button2->Location = System::Drawing::Point(628, 392);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Modifier";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FormPersonnel::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox2->Location = System::Drawing::Point(93, 427);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(173, 20);
			this->textBox2->TabIndex = 12;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &FormPersonnel::RchrchPrnmPrs);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(40, 394);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 16);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Nom :";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(19, 428);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 16);
			this->label2->TabIndex = 14;
			this->label2->Text = L"Prénom :";
			// 
			// FormPersonnel
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(715, 459);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridViewPerso);
			this->Name = L"FormPersonnel";
			this->Text = L"Personnel";
			this->Load += gcnew System::EventHandler(this, &FormPersonnel::FormPersonnel_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewPerso))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FormPersonnel_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		this->dataGridViewPerso->Refresh();
		this->oDsPrs = this->oSvcPrs->SelectionnerTousLesPersonnels("Prs");
		this->dataGridViewPerso->DataSource = this->oDsPrs;
		this->dataGridViewPerso->DataMember = "Prs";
	}
private: System::Void RchrchNmPrs(System::Object^ sender, System::EventArgs^ e) 
{
	this->oDsPrs = this->oSvcPrs->Rechercher(textBox1->Text, textBox2->Text, "PrsNm");
	this->dataGridViewPerso->DataSource = this->oDsPrs;
	this->dataGridViewPerso->DataMember = "PrsNm";
}

private: System::Void RchrchPrnmPrs(System::Object^ sender, System::EventArgs^ e) 
{
	this->oDsPrs = this->oSvcPrs->Rechercher(textBox1->Text, textBox2->Text, "PrsPr");
	this->dataGridViewPerso->DataSource = this->oDsPrs;
	this->dataGridViewPerso->DataMember = "PrsPr";
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	FormSupprPrs = gcnew POO_Projet_Babagge::FormSupprPrs;
	FormSupprPrs->Show();
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	FormModifPrs = gcnew POO_Projet_Babagge::FormModifPrs;
	FormModifPrs->Show();
}

private: System::Void button_inserer_Click(System::Object^ sender, System::EventArgs^ e) {
    insererPersonnel = gcnew POO_Projet_Babagge::Inserer_Personnel;
    insererPersonnel->Show();
    dataGridViewPerso->Refresh();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	insererPersonnel = gcnew POO_Projet_Babagge::Inserer_Personnel;
	insererPersonnel->Show();
}
};
}
