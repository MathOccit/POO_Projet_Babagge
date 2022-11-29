#pragma once
#include "CompAD.h"
#include "MappStat.h"

namespace NS_Comp_Svc
{
	ref class serviceStats
	{
	public:
		serviceStats();
		~serviceStats();
		System::String^* TVA(void);
		System::String^* MargeCo(void);
		System::String^* Remise(void);
		System::String^* DemarqueInco(void);
		float^ PanierMoyenRemise(void);
		float^ CdAmois(System::String^);
		System::String^ ProduitsSousSeuil(void);
		float^ MontantTotalAcahtClient(System::String^);
		System::String^ ArticlePlusVendus(void);
		System::String^ ArticleMoinsVendus(void);
		System::String^ CalculerValCom(void);
		System::String^ CalculerValAchat(void);
		System::String^ SimuVariations(int^, int^, int^, int^);

	private:
		NS_Comp_Data::CLcad oCad_Stats;
		NS_Comp_Mappage::MappStat oMappStat;
	};
}