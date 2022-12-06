#pragma once
using namespace System;

namespace NS_Comp_Mappage
{


	ref class MappCommande
	{
	public:
		String^ getDateLivraison(void);
		String^ getDateEmission(void);
		int^ getQuantiteProduit(void);
		void setID(String^);
		void setDateLivraison(String^);
		void setDateEmission(String^);
		void setRef(String^);
		void setQuantiteArticles(int^);
		String^ Selectionne(void);
		String^ Inserer(void);
		String^ Suppr(void);
		String^ Modifier(void);
		System::String^ Rechercher(void);

	private:
		String^ ID;
		String^ DateLivraison;
		String^ DateEmission;
		int^ quantiteArticles;
		String^ Ref;

	};
}
