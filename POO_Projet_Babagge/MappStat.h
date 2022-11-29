#pragma once
namespace NS_Comp_Mappage
{
	ref class MappStat
	{
	public:
		MappStat();
		~MappStat();
		System::String^ SlectMois(void);
		System::String^ ArticleSousSeuil(void);
		System::String^ SelectDixPlusVendu(void);
		System::String^ SelectDixMoinsVendu(void);
		System::String^ CalculerValCom(void);
		System::String^ CalculerValAchat(void);
		System::String^ TVA1(void);
		System::String^ TVA2(void);
		System::String^ TVA3(void);
		System::String^ MargeCo1(void);
		System::String^ MargeCo2(void);
		System::String^ MargeCo3(void);
		System::String^ Remise1(void);
		System::String^ Remise2(void);
		System::String^ DemarqueInco1(void);
		System::String^ DemarqueInco2(void);
		System::String^ DemarqueInco3(void);

	private:
		System::String^ mois;
		System::String^ articles;

	};
}