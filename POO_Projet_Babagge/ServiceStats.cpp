#include "pch.h"
#include "ServiceStats.h"


NS_Comp_SvcStat::ServiceStat::ServiceStat(void)
{
	this->oCad_Stat = gcnew NS_Comp_Data::CLcad();
	this->oMappStat = gcnew NS_Comp_Mappage::MappStat();
}


Data::DataSet^ NS_Comp_SvcStat::ServiceStat::AfficherStatistiques(String^ dataTableName)
{
	System::String^ sql;
	sql = this->oMappStat->MainStat();
	return this->oCad_Stat->getRows(sql, dataTableName);
};

void NS_Comp_SvcStat::ServiceStat::AfficherStatistiques() {
	throw gcnew System::NotImplementedException();
}

Data::DataSet^ NS_Comp_SvcStat::ServiceStat::Afficherpanier_moyen(String^ dataTableName)
{
	System::String^ sql;
	sql = this->oMappStat->PanierMoyen();
	return this->oCad_Stat->getRows(sql, dataTableName);
}

Data::DataSet^ NS_Comp_SvcStat::ServiceStat::AfficherSlectMois(String^ dataTableName)
{
	System::String^ sql;
	sql = this->oMappStat->SlectMois();
	return this->oCad_Stat->getRows(sql, dataTableName);
}
Data::DataSet^ NS_Comp_SvcStat::ServiceStat::AfficherAchatClient(String^ NomClient,String^ dataTableName)
{
	System::String^ sql;
	this->oMappStat->setNomClient(NomClient);
	sql = this->oMappStat->AchatClient();
	return this->oCad_Stat->getRows(sql, dataTableName);
}
Data::DataSet^ NS_Comp_SvcStat::ServiceStat::AfficherArticleSousSeuil(String^ dataTableName)
{
	System::String^ sql;
	sql = this->oMappStat->ArticleSousSeuil();
	return this->oCad_Stat->getRows(sql, dataTableName);
}
Data::DataSet^ NS_Comp_SvcStat::ServiceStat::AfficherSelectDixPlusVendu(String^ dataTableName)
{
	System::String^ sql;
	sql = this->oMappStat->SelectDixPlusVendu();
	return this->oCad_Stat->getRows(sql, dataTableName);
}
Data::DataSet^ NS_Comp_SvcStat::ServiceStat::AfficherSelectDixMoinsVendu(String^ dataTableName)
{
	System::String^ sql;
	sql = this->oMappStat->SelectDixMoinsVendu();
	return this->oCad_Stat->getRows(sql, dataTableName);
}
Data::DataSet^ NS_Comp_SvcStat::ServiceStat::AfficherCalculerValCom(String^ dataTableName)
{
	System::String^ sql;
	sql = this->oMappStat->CalculerValCom();
	return this->oCad_Stat->getRows(sql, dataTableName);
}
Data::DataSet^ NS_Comp_SvcStat::ServiceStat::AfficherCalculerValAchat(String^ dataTableName)
{
	System::String^ sql;
	sql = this->oMappStat->CalculerValAchat();
	return this->oCad_Stat->getRows(sql, dataTableName);
}
;