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
		void setDateLivraison(String^);
		void setDateEmission(String^);
		void setQuantiteArticles(int^);
		String^ Selectionne(void);
		String^ Inserer(void);
		String^ Suppr(void);
		String^ Modifier(void);

	private:
		int^ ID;
		String^ DateLivraison;
		String^ DateEmission;
		int^ quantiteArticles;

	};
}
