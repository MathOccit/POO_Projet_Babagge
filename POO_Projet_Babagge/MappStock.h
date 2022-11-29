#pragma once
namespace NS_Comp_Mappage
{
	public ref class MappStock
	{
	private:
		int id;
		System::String^ nomArticle;
		System::String^ categorieArticle;
		int^ quantite;
		double^ prixArticleHT;
		System::String^ prixArticleTVA;

	public:
		MappStock(void);

		System::String^ getNomArticle(void);
		System::String^ getCategorieArticle(void);
		int^ getQuantite(void);
		double^ getPrixArticleHT(void);
		System::String^ getPrixArticleTVA(void);

		void setNomArticle(System::String^);
		void setCategorieArticle(System::String^);
		void setQuantite(int^);
		void setPrixArticleHT(double^);
		void setPrixArticleTVA(System::String^);

		System::String^ Selectionner(void);
		System::String^ Ajouter(void);
		System::String^ Supprimer(void);
		System::String^ Modifier(void);
	};
}
