#pragma once
#include "pch.h"
#include "MappStat.h"
namespace NS_Comp_SvcStat {
	ref class ServiceStat
	{
	private:
		NS_Comp_Data::CLcad^ oCad_Stat;
		NS_Comp_Mappage::MappStat^ oMappStat;
		String^ Nom_Client;

	public:
		ServiceStat(void);

		Data::DataSet^ AfficherStatistiques(String^);
		Data::DataSet^ NS_Comp_SvcStat::ServiceStat::Afficherpanier_moyen(String^ dataTableName);
		Data::DataSet^ NS_Comp_SvcStat::ServiceStat::AfficherSlectMois(String^ dataTableName);
		Data::DataSet^ NS_Comp_SvcStat::ServiceStat::AfficherAchatClient(String^ ,String^ dataTableName);
		Data::DataSet^ NS_Comp_SvcStat::ServiceStat::AfficherArticleSousSeuil(String^ dataTableName);
		Data::DataSet^ NS_Comp_SvcStat::ServiceStat::AfficherSelectDixPlusVendu(String^ dataTableName);
		Data::DataSet^ NS_Comp_SvcStat::ServiceStat::AfficherSelectDixMoinsVendu(String^ dataTableName);
		Data::DataSet^ NS_Comp_SvcStat::ServiceStat::AfficherCalculerValCom(String^ dataTableName);
		Data::DataSet^ NS_Comp_SvcStat::ServiceStat::AfficherCalculerValAchat(String^ dataTableName);


		void AfficherStatistiques();

	};

}