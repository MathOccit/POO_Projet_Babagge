#pragma once
#include <iostream>

namespace POO_Projet_Babagge {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de FormModifStock
	/// </summary>
	public ref class FormModifStock : public System::Windows::Forms::Form
	{
	public:
		FormModifStock(void)
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
		~FormModifStock()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label15;

	private: System::Windows::Forms::TextBox^ textBox13;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Panel^ panel2;




	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Panel^ panel6;




	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DataGridView^ dataGridViewModifCl;
	private: System::Windows::Forms::Panel^ panel4;


	private: System::Windows::Forms::TextBox^ textBox_modif;
	private: System::Windows::Forms::Label^ label2;
	private: System::Data::DataSet^ oDs;
	private: NS_Comp_Svc::ServiceStock^ oSvcSt = gcnew NS_Comp_Svc::ServiceStock;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormModifStock::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridViewModifCl = (gcnew System::Windows::Forms::DataGridView());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox_modif = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel7->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewModifCl))->BeginInit();
			this->panel4->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(90)), static_cast<System::Int32>(static_cast<System::Byte>(137)),
				static_cast<System::Int32>(static_cast<System::Byte>(156)));
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 39.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1366, 150);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Modifier un article :";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->textBox1);
			this->panel7->Controls->Add(this->label4);
			this->panel7->Controls->Add(this->label15);
			this->panel7->Controls->Add(this->textBox13);
			this->panel7->Controls->Add(this->label14);
			this->panel7->Controls->Add(this->textBox11);
			this->panel7->Controls->Add(this->button3);
			this->panel7->Controls->Add(this->textBox12);
			this->panel7->Controls->Add(this->label13);
			this->panel7->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel7->Location = System::Drawing::Point(581, 0);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(496, 309);
			this->panel7->TabIndex = 32;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(288, 173);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(117, 20);
			this->textBox1->TabIndex = 31;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(10, 169);
			this->label4->Margin = System::Windows::Forms::Padding(10, 25, 3, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(272, 24);
			this->label4->TabIndex = 30;
			this->label4->Text = L"Seuil de réapprovisionnement :";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(10, 22);
			this->label15->Margin = System::Windows::Forms::Padding(10, 0, 3, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(145, 24);
			this->label15->TabIndex = 24;
			this->label15->Text = L"Prix Hors Taxe :";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(172, 27);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(117, 20);
			this->textBox13->TabIndex = 25;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(10, 71);
			this->label14->Margin = System::Windows::Forms::Padding(10, 25, 3, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(58, 24);
			this->label14->TabIndex = 26;
			this->label14->Text = L"TVA :";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(90, 124);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(117, 20);
			this->textBox11->TabIndex = 29;
			// 
			// button3
			// 
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(409, 271);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 27);
			this->button3->TabIndex = 23;
			this->button3->Text = L"Valider";
			this->button3->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &FormModifStock::button3_Click);
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(74, 76);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(117, 20);
			this->textBox12->TabIndex = 27;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(10, 120);
			this->label13->Margin = System::Windows::Forms::Padding(10, 25, 3, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(74, 24);
			this->label13->TabIndex = 28;
			this->label13->Text = L"Marge :";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->panel7);
			this->panel2->Controls->Add(this->textBox9);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->textBox8);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->textBox7);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->textBox6);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->textBox5);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(289, 388);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1077, 309);
			this->panel2->TabIndex = 33;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(128, 222);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(408, 76);
			this->textBox9->TabIndex = 16;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(3, 218);
			this->label11->Margin = System::Windows::Forms::Padding(3, 25, 3, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(119, 24);
			this->label11->TabIndex = 15;
			this->label11->Text = L"Désignation :";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(117, 174);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(117, 20);
			this->textBox8->TabIndex = 14;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(3, 169);
			this->label10->Margin = System::Windows::Forms::Padding(3, 25, 3, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(108, 24);
			this->label10->TabIndex = 13;
			this->label10->Text = L"Référence :";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(99, 124);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(117, 20);
			this->textBox7->TabIndex = 12;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(3, 120);
			this->label9->Margin = System::Windows::Forms::Padding(3, 25, 3, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(90, 24);
			this->label9->TabIndex = 11;
			this->label9->Text = L"Quantité :";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(110, 75);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(117, 20);
			this->textBox6->TabIndex = 10;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(3, 71);
			this->label8->Margin = System::Windows::Forms::Padding(3, 25, 3, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(101, 24);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Categorie :";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(70, 26);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(199, 20);
			this->textBox5->TabIndex = 8;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(3, 22);
			this->label7->Margin = System::Windows::Forms::Padding(3, 10, 3, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(61, 24);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Nom :";
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->textBox2);
			this->panel6->Controls->Add(this->label3);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel6->Location = System::Drawing::Point(0, 388);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(289, 310);
			this->panel6->TabIndex = 32;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(133, 22);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(36, 20);
			this->textBox2->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(6, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(121, 24);
			this->label3->TabIndex = 2;
			this->label3->Text = L"ID de l\'article:";
			// 
			// dataGridViewModifCl
			// 
			this->dataGridViewModifCl->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewModifCl->Dock = System::Windows::Forms::DockStyle::Top;
			this->dataGridViewModifCl->Location = System::Drawing::Point(0, 202);
			this->dataGridViewModifCl->Name = L"dataGridViewModifCl";
			this->dataGridViewModifCl->Size = System::Drawing::Size(1366, 186);
			this->dataGridViewModifCl->TabIndex = 31;
			this->dataGridViewModifCl->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &FormModifStock::dataGridViewModifCl_CellClick);
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->textBox_modif);
			this->panel4->Controls->Add(this->label2);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(0, 150);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1366, 52);
			this->panel4->TabIndex = 30;
			// 
			// textBox_modif
			// 
			this->textBox_modif->Location = System::Drawing::Point(187, 13);
			this->textBox_modif->Name = L"textBox_modif";
			this->textBox_modif->Size = System::Drawing::Size(117, 20);
			this->textBox_modif->TabIndex = 3;
			this->textBox_modif->TextChanged += gcnew System::EventHandler(this, &FormModifStock::RchrchModifStock);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(7, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(150, 24);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nom de l\'article :";
			// 
			// FormModifStock
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1366, 698);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->dataGridViewModifCl);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->label1);
			this->Name = L"FormModifStock";
			this->Text = L"FormModifStock";
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewModifCl))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void RchrchModifStock(System::Object^ sender, System::EventArgs^ e) 
	{
		this->oDs = this->oSvcSt->Rechercher(textBox_modif->Text, "Stock");
		this->dataGridViewModifCl->DataSource = this->oDs;
		this->dataGridViewModifCl->DataMember = "Stock";
	}
private: System::Void dataGridViewModifCl_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) 
{
	DataGridViewRow^ row = dataGridViewModifCl->CurrentRow;
	String^ IDsotck = row->Cells["id_stock"]->Value->ToString();
	String^ NomArticle = row->Cells["nom_article"]->Value->ToString();
	String^ CategorieArticle = row->Cells["categorie_article"]->Value->ToString();
	String^ Quantite = row->Cells["quantite"]->Value->ToString();
	String^ PrixHT = row->Cells["prix_article_HT"]->Value->ToString();
	String^ PrixTVA = row->Cells["prix_article_tva"]->Value->ToString();
	String^ Marge = row->Cells["marge"]->Value->ToString();
	String^ RefArticle = row->Cells["ref_article"]->Value->ToString();
	String^ DesArticle = row->Cells["designation_article"]->Value->ToString();
	String^ SeuilReappro = row->Cells["seuil_reappro"]->Value->ToString();

	textBox1->Text = SeuilReappro;
	textBox2->Text = IDsotck;
	textBox5->Text = NomArticle;
	textBox6->Text = CategorieArticle;
	textBox7->Text = Quantite;
	textBox8->Text = RefArticle;
	textBox9->Text = DesArticle;

	textBox11->Text = Marge;
	textBox12->Text = PrixTVA;
	textBox13->Text = PrixHT;
}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	oSvcSt = gcnew NS_Comp_Svc::ServiceStock;

	String^ SeuilReappro = textBox1->Text;
	String^ IDsotck = textBox2->Text;
	String^ NomArticle = textBox5->Text;
	String^ CategorieArticle = textBox6->Text;
	String^ Quantite = textBox7->Text;
	String^ RefArticle = textBox8->Text;
	String^ Marge = textBox11->Text;
	String^ DesArticle = textBox9->Text;
	String^ PrixTVA = textBox12->Text;
	String^ PrixHT = textBox13->Text;
	String^ Margef=Marge->Replace(",", ".");
	String^ prixTVAf = PrixTVA->Replace(",", ".");
	String^ prixHTf = PrixHT->Replace(",", ".");

	this->oSvcSt->ModifierUnStock(IDsotck, NomArticle, CategorieArticle, Quantite, RefArticle, DesArticle, Margef, prixHTf , prixTVAf, SeuilReappro);
	this->Close();
}
	   /*float^ Margef = dynamic_cast<float^>(Marge);
	float^ PrixHTf = dynamic_cast<float^>(PrixHT);
	float^ PrixTVAf = dynamic_cast<float^>(PrixTVA);
	float^ PrixHTf = Convert::ToDouble(PrixHT);
	float^ PrixTVAf = Convert::ToDouble(PrixTVA);
	int^ Quantitef = Convert::ToInt32(Quantite);
	int^ RefArticlef = Convert::ToInt32(RefArticle);
	int^ SeuilReapprof = Convert::ToInt32(SeuilReappro);*/
};
}