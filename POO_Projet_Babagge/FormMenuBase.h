#pragma once
#include "FormCommande.h"
#include "FormClient.h"
#include "FormStock.h"
#include "FormPersonnel.h"
#include "FormStat.h"
#include "TestUnit.h"
#include "FormTestV.h"

namespace POO_Projet_Babagge {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de FormMenuBase
	/// </summary>
	public ref class FormMenuBase : public System::Windows::Forms::Form
	{

	public:
		FormMenuBase(void)
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
		~FormMenuBase()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ LblTitre;
	private: Form^ activeForm;

	private: System::Windows::Forms::Panel^ PanelChildForm;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private:

	protected:







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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormMenuBase::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->LblTitre = (gcnew System::Windows::Forms::Label());
			this->PanelChildForm = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(220, 598);
			this->panel1->TabIndex = 0;
			// 
			// button5
			// 
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button5->Dock = System::Windows::Forms::DockStyle::Top;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::SeaShell;
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->Location = System::Drawing::Point(0, 410);
			this->button5->Name = L"button5";
			this->button5->Padding = System::Windows::Forms::Padding(12, 0, 0, 0);
			this->button5->Size = System::Drawing::Size(220, 60);
			this->button5->TabIndex = 6;
			this->button5->Text = L"  Statistiques";
			this->button5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button5->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &FormMenuBase::btnStats);
			// 
			// button4
			// 
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button4->Dock = System::Windows::Forms::DockStyle::Top;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::SeaShell;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->Location = System::Drawing::Point(0, 350);
			this->button4->Name = L"button4";
			this->button4->Padding = System::Windows::Forms::Padding(12, 0, 0, 0);
			this->button4->Size = System::Drawing::Size(220, 60);
			this->button4->TabIndex = 5;
			this->button4->Text = L"  Stock";
			this->button4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button4->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &FormMenuBase::btnStock);
			// 
			// button3
			// 
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button3->Dock = System::Windows::Forms::DockStyle::Top;
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::SeaShell;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->Location = System::Drawing::Point(0, 290);
			this->button3->Name = L"button3";
			this->button3->Padding = System::Windows::Forms::Padding(12, 0, 0, 0);
			this->button3->Size = System::Drawing::Size(220, 60);
			this->button3->TabIndex = 4;
			this->button3->Text = L"  Commandes";
			this->button3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &FormMenuBase::btnCommandes);
			// 
			// button2
			// 
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->Dock = System::Windows::Forms::DockStyle::Top;
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::SeaShell;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->Location = System::Drawing::Point(0, 230);
			this->button2->Name = L"button2";
			this->button2->Padding = System::Windows::Forms::Padding(12, 0, 0, 0);
			this->button2->Size = System::Drawing::Size(220, 60);
			this->button2->TabIndex = 3;
			this->button2->Text = L"  Personnel";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button2->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FormMenuBase::btnPerso);
			// 
			// button1
			// 
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Dock = System::Windows::Forms::DockStyle::Top;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::SeaShell;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(0, 170);
			this->button1->Name = L"button1";
			this->button1->Padding = System::Windows::Forms::Padding(12, 0, 0, 0);
			this->button1->Size = System::Drawing::Size(220, 60);
			this->button1->TabIndex = 2;
			this->button1->Text = L"  Clients";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FormMenuBase::btnClient);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Silver;
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->ForeColor = System::Drawing::Color::Coral;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(220, 170);
			this->panel2->TabIndex = 1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(220, 170);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->AutoScroll = true;
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(14)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(127)));
			this->panel3->Controls->Add(this->LblTitre);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(220, 0);
			this->panel3->Margin = System::Windows::Forms::Padding(0, 3, 3, 3);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(713, 170);
			this->panel3->TabIndex = 1;
			// 
			// LblTitre
			// 
			this->LblTitre->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->LblTitre->AutoSize = true;
			this->LblTitre->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 39.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LblTitre->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->LblTitre->Location = System::Drawing::Point(259, 56);
			this->LblTitre->Name = L"LblTitre";
			this->LblTitre->Size = System::Drawing::Size(203, 61);
			this->LblTitre->TabIndex = 3;
			this->LblTitre->Text = L"Acceuil";
			this->LblTitre->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// PanelChildForm
			// 
			this->PanelChildForm->Dock = System::Windows::Forms::DockStyle::Fill;
			this->PanelChildForm->Location = System::Drawing::Point(220, 170);
			this->PanelChildForm->Name = L"PanelChildForm";
			this->PanelChildForm->Size = System::Drawing::Size(713, 428);
			this->PanelChildForm->TabIndex = 2;
			// 
			// FormMenuBase
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(933, 598);
			this->Controls->Add(this->PanelChildForm);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->DoubleBuffered = true;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"FormMenuBase";
			this->Text = L"Elec\'TRON Enterprise Edition";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &FormMenuBase::FormMenuBase_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

private: void OpenChildForm(Form^ childform, Object^ sender)
{
	activeForm = childform;
	childform->TopLevel = false;
	childform->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
	childform->Dock = System::Windows::Forms::DockStyle::Fill;
	this->PanelChildForm->Controls->Add(childform);
	this->PanelChildForm->Tag = childform;
	childform->BringToFront();
	childform->Show();
	LblTitre->Text = childform->Text;
}


private: System::Void btnClient(System::Object^ sender, System::EventArgs^ e) 
{
	OpenChildForm(gcnew POO_Projet_Babagge::Client, sender);

}
private: System::Void btnPerso(System::Object^ sender, System::EventArgs^ e) 
{
	OpenChildForm(gcnew POO_Projet_Babagge::FormPersonnel, sender);
}
private: System::Void btnCommandes(System::Object^ sender, System::EventArgs^ e) 
{
	OpenChildForm(gcnew CppCLRWinFormsProject::FormCommande,sender);
}
private: System::Void btnStock(System::Object^ sender, System::EventArgs^ e) 
{
	OpenChildForm(gcnew POO_Projet_Babagge::FormStock, sender);
}
private: System::Void btnStats(System::Object^ sender, System::EventArgs^ e) 
{
	OpenChildForm(gcnew interfacestat::FormStat, sender);
}

private: System::Void FormMenuBase_Load(System::Object^ sender, System::EventArgs^ e) 
{
	NS_Comp_Test::Test^ oTest = gcnew NS_Comp_Test::Test;
	String^ oFinTest = oTest->AjouterUnPersonnel();
	if (oFinTest == "Test valider")
	{

	}
	if (oFinTest == "Test invalide")
	{

	}
}

};
}
