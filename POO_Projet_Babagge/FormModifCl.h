#pragma once
#include "ServiceClient.h"

namespace POO_Projet_Babagge {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de FormModifCl
	/// </summary>
	public ref class FormModifCl : public System::Windows::Forms::Form
	{
	public:
		FormModifCl(void)
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
		~FormModifCl()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::DataGridView^ dataGridViewModifCl;

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox_modif;

	private: System::Windows::Forms::Label^ label2;
	private: System::Data::DataSet^ oDsCl;
	private: NS_Comp_Svc::ServiceClient^ oSvcCl = gcnew NS_Comp_Svc::ServiceClient;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
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
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label13;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormModifCl::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->dataGridViewModifCl = (gcnew System::Windows::Forms::DataGridView());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox_modif = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
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
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewModifCl))->BeginInit();
			this->panel4->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel7->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::CornflowerBlue;
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 39.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FloralWhite;
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1366, 150);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Modifier un profil Client";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::CornflowerBlue;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(450, 271);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 27);
			this->button3->TabIndex = 23;
			this->button3->Text = L"Valider";
			this->button3->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &FormModifCl::button3_Click);
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->label6);
			this->panel6->Controls->Add(this->textBox4);
			this->panel6->Controls->Add(this->textBox3);
			this->panel6->Controls->Add(this->label5);
			this->panel6->Controls->Add(this->textBox2);
			this->panel6->Controls->Add(this->label3);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel6->Location = System::Drawing::Point(0, 388);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(289, 310);
			this->panel6->TabIndex = 22;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(6, 116);
			this->label6->Margin = System::Windows::Forms::Padding(3, 25, 3, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(161, 24);
			this->label6->TabIndex = 27;
			this->label6->Text = L"ID de localisation :";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(173, 120);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(36, 20);
			this->textBox4->TabIndex = 26;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(156, 71);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(36, 20);
			this->textBox3->TabIndex = 25;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(6, 67);
			this->label5->Margin = System::Windows::Forms::Padding(3, 25, 3, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(144, 24);
			this->label5->TabIndex = 24;
			this->label5->Text = L"ID de l\'adresse :";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(121, 22);
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
			this->label3->Size = System::Drawing::Size(109, 24);
			this->label3->TabIndex = 2;
			this->label3->Text = L"ID du profil :";
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->dataGridViewModifCl);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel5->Location = System::Drawing::Point(0, 202);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(1366, 186);
			this->panel5->TabIndex = 21;
			// 
			// dataGridViewModifCl
			// 
			this->dataGridViewModifCl->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewModifCl->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridViewModifCl->Location = System::Drawing::Point(0, 0);
			this->dataGridViewModifCl->Name = L"dataGridViewModifCl";
			this->dataGridViewModifCl->Size = System::Drawing::Size(1366, 186);
			this->dataGridViewModifCl->TabIndex = 0;
			this->dataGridViewModifCl->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &FormModifCl::RecupDon);
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->textBox1);
			this->panel4->Controls->Add(this->label4);
			this->panel4->Controls->Add(this->textBox_modif);
			this->panel4->Controls->Add(this->label2);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel4->Location = System::Drawing::Point(0, 150);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1366, 52);
			this->panel4->TabIndex = 20;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(519, 15);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(117, 20);
			this->textBox1->TabIndex = 6;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &FormModifCl::RchrchPrnmClModif);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(350, 10);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(163, 24);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Prenom du client :";
			// 
			// textBox_modif
			// 
			this->textBox_modif->Location = System::Drawing::Point(150, 14);
			this->textBox_modif->Name = L"textBox_modif";
			this->textBox_modif->Size = System::Drawing::Size(117, 20);
			this->textBox_modif->TabIndex = 3;
			this->textBox_modif->TextChanged += gcnew System::EventHandler(this, &FormModifCl::RchrchNmClModif);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(7, 10);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(137, 24);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nom du client :";
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
			this->panel2->TabIndex = 28;
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->label15);
			this->panel7->Controls->Add(this->textBox10);
			this->panel7->Controls->Add(this->textBox13);
			this->panel7->Controls->Add(this->label12);
			this->panel7->Controls->Add(this->label14);
			this->panel7->Controls->Add(this->textBox11);
			this->panel7->Controls->Add(this->button3);
			this->panel7->Controls->Add(this->textBox12);
			this->panel7->Controls->Add(this->label13);
			this->panel7->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel7->Location = System::Drawing::Point(540, 0);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(537, 309);
			this->panel7->TabIndex = 32;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(10, 22);
			this->label15->Margin = System::Windows::Forms::Padding(10, 0, 3, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(156, 24);
			this->label15->TabIndex = 24;
			this->label15->Text = L"Numero de voie :";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(76, 174);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(117, 20);
			this->textBox10->TabIndex = 31;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(172, 27);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(117, 20);
			this->textBox13->TabIndex = 25;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(10, 169);
			this->label12->Margin = System::Windows::Forms::Padding(10, 25, 3, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(60, 24);
			this->label12->TabIndex = 30;
			this->label12->Text = L"Pays :";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(10, 71);
			this->label14->Margin = System::Windows::Forms::Padding(10, 25, 3, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(128, 24);
			this->label14->TabIndex = 26;
			this->label14->Text = L"Nom de voie :";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(72, 124);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(117, 20);
			this->textBox11->TabIndex = 29;
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(144, 76);
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
			this->label13->Size = System::Drawing::Size(56, 24);
			this->label13->TabIndex = 28;
			this->label13->Text = L"Ville :";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(138, 222);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(117, 20);
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
			this->label11->Size = System::Drawing::Size(129, 24);
			this->label11->TabIndex = 15;
			this->label11->Text = L"Adresse mail :";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(215, 174);
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
			this->label10->Size = System::Drawing::Size(206, 24);
			this->label10->TabIndex = 13;
			this->label10->Text = L"Numero de telephone :";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(180, 124);
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
			this->label9->Size = System::Drawing::Size(175, 24);
			this->label9->TabIndex = 11;
			this->label9->Text = L"Date de naissance :";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(96, 76);
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
			this->label8->Size = System::Drawing::Size(87, 24);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Prenom :";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(70, 26);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(117, 20);
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
			// FormModifCl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1366, 698);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->label1);
			this->Name = L"FormModifCl";
			this->Text = L"FormModifCl";
			this->TextChanged += gcnew System::EventHandler(this, &FormModifCl::RchrchNmClModif);
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewModifCl))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void RchrchNmClModif(System::Object^ sender, System::EventArgs^ e) 
	{
		this->oDsCl = this->oSvcCl->RechercherModif(textBox_modif->Text, textBox1->Text, "ClN");
		this->dataGridViewModifCl->DataSource = this->oDsCl;
		this->dataGridViewModifCl->DataMember = "ClN";
	}
private: System::Void RchrchPrnmClModif(System::Object^ sender, System::EventArgs^ e) 
{
	this->oDsCl = this->oSvcCl->RechercherModif(textBox_modif->Text, textBox1->Text, "ClN");
	this->dataGridViewModifCl->DataSource = this->oDsCl;
	this->dataGridViewModifCl->DataMember = "ClN";
}

private: System::Void RecupDon(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) 
{
	DataGridViewRow^ row = dataGridViewModifCl->CurrentRow;
	String^ IDClient = row->Cells["id_client"]->Value->ToString();
	String^ IDAdresse = row->Cells["id_adresse"]->Value->ToString(); 
	String^ IDGeographie = row->Cells["id_geographie"]->Value->ToString();
	String^ NomClient = row->Cells["nom_client"]->Value->ToString();
	String^ PrenomClient = row->Cells["prenom_client"]->Value->ToString();
	String^ DateClient = row->Cells["date_de_naissance"]->Value->ToString();
	String^ NumClient = row->Cells["numero_tel_client"]->Value->ToString();
	String^ MailClient = row->Cells["adresse_mail_client"]->Value->ToString();
	String^ NumVoie = row->Cells["num_voie"]->Value->ToString();
	String^ NomVoie = row->Cells["nom_voie"]->Value->ToString();
	String^ Ville = row->Cells["ville"]->Value->ToString();
	String^ Pays = row->Cells["pays"]->Value->ToString();


	textBox2->Text = IDClient;
	textBox3->Text = IDAdresse;
	textBox4->Text = IDGeographie;
	textBox5->Text = NomClient;
	textBox6->Text = PrenomClient;
	textBox7->Text = DateClient;
	textBox8->Text = NumClient;
	textBox9->Text = MailClient;
	textBox10->Text = Pays;
	textBox11->Text = Ville;
	textBox12->Text = NomVoie;
	textBox13->Text = NumVoie;

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	oSvcCl = gcnew NS_Comp_Svc::ServiceClient;
	
	String^ IDClient = textBox2->Text;
	String^ IDAdresse = textBox3->Text;
	String^ IDGeographie = textBox4->Text;
	String^ NomClient = textBox5->Text;
	String^ PrenomClient = textBox6->Text;
	String^ DateClient = textBox7->Text;
	String^ NumClient = textBox8->Text;
	String^ MailClient = textBox9->Text;
	String^ Pays = textBox10->Text;
	String^ Ville = textBox11->Text;
	String^ NomVoie = textBox12->Text;
	String^ NumVoie = textBox13->Text;

	this->oSvcCl->ModifierUnClient(IDClient, IDAdresse, IDGeographie, NomClient, PrenomClient, DateClient, NumClient, MailClient, NumVoie, NomVoie, Ville, Pays);
	this->Close();
}

};
}
