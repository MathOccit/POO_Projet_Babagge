#pragma once

namespace NS_Comp_Mappage
{
	using namespace System;

	public ref class MappCommande : public MappStandard
	{
	public:
		String^ getDateLivraison(void);
		String^ getDateEmission(void);
		int^ getQuantiteProduit(void);
		void setDateLivraison(String^);
		void setDateEmission(String^);
		void setQuantiteArticles(int^);
		String^ Select(void);
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
