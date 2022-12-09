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
		String^ quantite;
		String^ prixArticleHT;
		String^ prixArticleTVA;
		String^ Marge;
		String^ refArticle;
		String^ seuilReappro;
		String^ designationArticle;
		String^ Recherche;

	public:
		String^ getID(void);
		System::String^ getNomArticle(void);
		System::String^ getCategorieArticle(void);
		String^ getQuantite(void);
		String^ getPrixArticleHT(void);
		String^ getPrixArticleTVA(void);
		String^ getrefArticle(void);
		String^ getseuilReappro(void);
		System::String^ getdesignationArticle(void);


		void setID(String^);
		void setNomArticle(System::String^);
		void setCategorieArticle(System::String^);
		void setQuantite(String^);
		void setPrixArticleHT(String^);
		void setMarge(String^);
		void setPrixArticleTVA(String^);
		void setrefArticle(String^);
		void setseuilReappro(String^);
		void setdesignationArticle(System::String^);

		System::String^ Selectionner(void);
		System::String^ Ajouter(void);
		System::String^ Supprimer(void);
		System::String^ Modifier(void);
		System::String^ Rechercher(void);
	};

}
