#pragma once

namespace NS_Comp_Mappage
{
	using namespace System;

	ref class MappCommande
	{
	public:
		MappCommande();
		~MappCommande();
		String^ getDateLivraison(void);
		String^ getDateEmission(void);
		String^ getQuantiteProduit(void);
		void setDateLivraison(String^);
		void setDateEmission(String^);
		void setQuantiteArticles(String^);
		String^ Select(void);
		String^ Inserer(void);
		String^ Suppr(void);
		String^ Modifier(void);

	private:
		int ID;
		String^ DateLivraison;
		String^ DateEmission;
		int quantiteArticles;

	};
}
