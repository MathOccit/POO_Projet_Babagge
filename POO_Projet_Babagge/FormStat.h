#pragma once
//#include "MappStandard.h";
#include"ServiceStats.h"
#include "pch.h"

namespace interfacestat {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de FormStat
	/// </summary>
	public ref class FormStat : public System::Windows::Forms::Form
	{
	public:
		FormStat(void)
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
		~FormStat()
		{
			if (components)
			{
				delete components;
			}
		}


	protected:







































	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;
	private:System::Data::DataSet^ oDsStat;



	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;






	private: NS_Comp_Svc::ServiceClient^ oSvcCl = gcnew NS_Comp_Svc::ServiceClient;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button9;
	private:NS_Comp_SvcStat::ServiceStat^ oSvcStat = gcnew NS_Comp_SvcStat::ServiceStat;
#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		   /// le contenu de cette méthode avec l'éditeur de code.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   this->button4 = (gcnew System::Windows::Forms::Button());
			   this->button5 = (gcnew System::Windows::Forms::Button());
			   this->button6 = (gcnew System::Windows::Forms::Button());
			   this->button7 = (gcnew System::Windows::Forms::Button());
			   this->button8 = (gcnew System::Windows::Forms::Button());
			   this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			   this->button9 = (gcnew System::Windows::Forms::Button());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // textBox1
			   // 
			   this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->textBox1->Location = System::Drawing::Point(278, 334);
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->ReadOnly = true;
			   this->textBox1->Size = System::Drawing::Size(156, 20);
			   this->textBox1->TabIndex = 14;
			   // 
			   // dataGridView1
			   // 
			   this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				   | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			   this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			   this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Sunken;
			   this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			   this->dataGridView1->Location = System::Drawing::Point(12, 28);
			   this->dataGridView1->Name = L"dataGridView1";
			   this->dataGridView1->Size = System::Drawing::Size(692, 155);
			   this->dataGridView1->TabIndex = 12;
			   this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &FormStat::Click);
			   // 
			   // button1
			   // 
			   this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->button1->Location = System::Drawing::Point(12, 424);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(211, 23);
			   this->button1->TabIndex = 15;
			   this->button1->Text = L"Articles sous seuil de reaprovisionnement";
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &FormStat::button1_Click);
			   // 
			   // button2
			   // 
			   this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->button2->Location = System::Drawing::Point(12, 379);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(80, 23);
			   this->button2->TabIndex = 16;
			   this->button2->Text = L"PanierMoyen";
			   this->button2->UseVisualStyleBackColor = true;
			   this->button2->Click += gcnew System::EventHandler(this, &FormStat::button2_Click);
			   // 
			   // button3
			   // 
			   this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->button3->Location = System::Drawing::Point(259, 379);
			   this->button3->Margin = System::Windows::Forms::Padding(20, 3, 3, 3);
			   this->button3->Name = L"button3";
			   this->button3->Size = System::Drawing::Size(166, 23);
			   this->button3->TabIndex = 18;
			   this->button3->Text = L"Top10 Articles les plus vendus";
			   this->button3->UseVisualStyleBackColor = true;
			   this->button3->Click += gcnew System::EventHandler(this, &FormStat::button3_Click);
			   // 
			   // button4
			   // 
			   this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->button4->Location = System::Drawing::Point(296, 424);
			   this->button4->Margin = System::Windows::Forms::Padding(70, 3, 3, 3);
			   this->button4->Name = L"button4";
			   this->button4->Size = System::Drawing::Size(175, 23);
			   this->button4->TabIndex = 17;
			   this->button4->Text = L"Top10 Articles les moins vendus";
			   this->button4->UseVisualStyleBackColor = true;
			   this->button4->Click += gcnew System::EventHandler(this, &FormStat::button4_Click);
			   // 
			   // button5
			   // 
			   this->button5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			   this->button5->Location = System::Drawing::Point(556, 379);
			   this->button5->Margin = System::Windows::Forms::Padding(20, 3, 3, 3);
			   this->button5->Name = L"button5";
			   this->button5->Size = System::Drawing::Size(147, 23);
			   this->button5->TabIndex = 22;
			   this->button5->Text = L"Depense totale d\'un client";
			   this->button5->UseVisualStyleBackColor = true;
			   this->button5->Click += gcnew System::EventHandler(this, &FormStat::button5_Click);
			   // 
			   // button6
			   // 
			   this->button6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			   this->button6->Location = System::Drawing::Point(554, 424);
			   this->button6->Margin = System::Windows::Forms::Padding(70, 3, 3, 3);
			   this->button6->Name = L"button6";
			   this->button6->Size = System::Drawing::Size(150, 23);
			   this->button6->TabIndex = 21;
			   this->button6->Text = L"Chiffre d\'affaire sur un mois";
			   this->button6->UseVisualStyleBackColor = true;
			   this->button6->Click += gcnew System::EventHandler(this, &FormStat::button6_Click);
			   // 
			   // button7
			   // 
			   this->button7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->button7->Location = System::Drawing::Point(115, 379);
			   this->button7->Margin = System::Windows::Forms::Padding(20, 3, 3, 3);
			   this->button7->Name = L"button7";
			   this->button7->Size = System::Drawing::Size(121, 23);
			   this->button7->TabIndex = 20;
			   this->button7->Text = L"Valeur commerciale";
			   this->button7->UseVisualStyleBackColor = true;
			   this->button7->Click += gcnew System::EventHandler(this, &FormStat::button7_Click);
			   // 
			   // button8
			   // 
			   this->button8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			   this->button8->Location = System::Drawing::Point(448, 379);
			   this->button8->Margin = System::Windows::Forms::Padding(20, 3, 3, 3);
			   this->button8->Name = L"button8";
			   this->button8->Size = System::Drawing::Size(85, 23);
			   this->button8->TabIndex = 19;
			   this->button8->Text = L"Valeur d\'achat";
			   this->button8->UseVisualStyleBackColor = true;
			   this->button8->Click += gcnew System::EventHandler(this, &FormStat::button8_Click);
			   // 
			   // textBox2
			   // 
			   this->textBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				   | System::Windows::Forms::AnchorStyles::Right));
			   this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			   this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   this->textBox2->Location = System::Drawing::Point(278, 246);
			   this->textBox2->Name = L"textBox2";
			   this->textBox2->ReadOnly = true;
			   this->textBox2->Size = System::Drawing::Size(156, 31);
			   this->textBox2->TabIndex = 23;
			   this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			   // 
			   // button9
			   // 
			   this->button9->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			   this->button9->Location = System::Drawing::Point(169, 331);
			   this->button9->Name = L"button9";
			   this->button9->Size = System::Drawing::Size(103, 23);
			   this->button9->TabIndex = 24;
			   this->button9->Text = L"Vider la recherche";
			   this->button9->UseVisualStyleBackColor = true;
			   this->button9->Click += gcnew System::EventHandler(this, &FormStat::button9_Click);
			   // 
			   // FormStat
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			   this->ClientSize = System::Drawing::Size(716, 459);
			   this->Controls->Add(this->button9);
			   this->Controls->Add(this->textBox2);
			   this->Controls->Add(this->button5);
			   this->Controls->Add(this->button6);
			   this->Controls->Add(this->button7);
			   this->Controls->Add(this->button8);
			   this->Controls->Add(this->button3);
			   this->Controls->Add(this->button4);
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->textBox1);
			   this->Controls->Add(this->dataGridView1);
			   this->Margin = System::Windows::Forms::Padding(2);
			   this->MinimumSize = System::Drawing::Size(731, 498);
			   this->Name = L"FormStat";
			   this->Text = L"Statistique";
			   this->Load += gcnew System::EventHandler(this, &FormStat::FormStat_Load);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void FormStat_Load(System::Object^ sender, System::EventArgs^ e) 
	{
		
		
		
	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Refresh();
	this->oDsStat = this->oSvcStat->Afficherpanier_moyen("panier_moyen");//mon dataset
	this->dataGridView1->DataSource = this->oDsStat;
	this->dataGridView1->DataMember = "panier_moyen";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Refresh();
	this->oDsStat = this->oSvcStat->AfficherSelectDixPlusVendu("PlVd");//mon dataset
	this->dataGridView1->DataSource = this->oDsStat;
	this->dataGridView1->DataMember = "PlVd";
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Refresh();
	this->oDsStat = this->oSvcStat->AfficherCalculerValCom("ValCom");//mon dataset
	this->dataGridView1->DataSource = this->oDsStat;
	this->dataGridView1->DataMember = "ValCom";
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Refresh();
	this->oDsStat = this->oSvcStat->AfficherArticleSousSeuil("Art_SS");//mon dataset
	this->dataGridView1->DataSource = this->oDsStat;
	this->dataGridView1->DataMember = "Art_SS";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Refresh();
	this->oDsStat = this->oSvcStat->AfficherSelectDixMoinsVendu("PlMVd");//mon dataset
	this->dataGridView1->DataSource = this->oDsStat;
	this->dataGridView1->DataMember = "PlMVd";
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Refresh();
	this->oDsStat = this->oSvcStat->AfficherCalculerValAchat("ValAch");//mon dataset
	this->dataGridView1->DataSource = this->oDsStat;
	this->dataGridView1->DataMember = "ValAch";
}
public: System::Void Click(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) 
{
	DataGridViewRow^ row = dataGridView1->CurrentRow;
	String^ NomClient = row->Cells["nom_client"]->Value->ToString();
	textBox1->Text = NomClient;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	if (textBox1->Text == "") {
		textBox2->Text = "Veuillez entrer un nom de client";
		dataGridView1->Refresh();
		this->oDsStat = this->oSvcCl->SelectionnerTousLesClients("Rsl");
		this->dataGridView1->DataSource = this->oDsStat;
		this->dataGridView1->DataMember = "Rsl";
	}
	else {

		String^ Nom_Client = textBox1->Text;
		dataGridView1->Refresh();
		this->oDsStat = this->oSvcStat->AfficherAchatClient(Nom_Client,"Achat_Client");//mon dataset
		this->dataGridView1->DataSource = this->oDsStat;
		this->dataGridView1->DataMember = "Achat_Client";
		}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Refresh();
	this->oDsStat = this->oSvcStat->AfficherSlectMois("SlectMois");//mon dataset
	this->dataGridView1->DataSource = this->oDsStat;
	this->dataGridView1->DataMember = "SlectMois";
}

private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) 
{
	textBox1->Text = "";
}
};
}