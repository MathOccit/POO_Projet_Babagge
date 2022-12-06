#pragma once

using namespace System;
namespace NS_Comp_Mappage 
{

	ref class MappStock
	{
	private:
		String^ ID;
		String^ nomArticle;
		String^ categorieArticle;
		int^ quantite;
		double^ prixArticleHT;
		String^ prixArticleTVA;
		int^ refArticle;
		int^ seuilReappro;
		String^ designationArticle;
		String^ Recherche;

	public:
		String^ getID(void);
		System::String^ getNomArticle(void);
		System::String^ getCategorieArticle(void);
		int^ getQuantite(void);
		double^ getPrixArticleHT(void);
		System::String^ getPrixArticleTVA(void);
		int^ getrefArticle(void);
		int^ getseuilReappro(void);
		System::String^ getdesignationArticle(void);


		void setID(String^);
		void setNomArticle(System::String^);
		void setCategorieArticle(System::String^);
		void setQuantite(int^);
		void setPrixArticleHT(double^);
		void setPrixArticleTVA(System::String^);
		void setrefArticle(int^);
		void setseuilReappro(int^);
		void setdesignationArticle(System::String^);

		System::String^ Selectionner(void);
		System::String^ Ajouter(void);
		System::String^ Supprimer(void);
		System::String^ Modifier(void);
		System::String^ Rechercher(void);
	};

}
