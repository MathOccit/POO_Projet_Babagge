#include "pch.h"
#include "TestUnit.h"


using namespace System;

void NS_Comp_Test::Test::setID(int^ ID)
{
	this->ID = ID;
}

NS_Comp_Test::Test::Test(void) {
	this->oCad_Test = gcnew NS_Comp_Data::CLcad();
}

String^ NS_Comp_Test::Test::Inserer_donnees_personnel(void) {
	return "insert into[DonneBDD_Test10].[dbo].[personnel](nom_personnel, prenom_personnel, date_embauche, titulaire, numero_tel_personnel, adresse_mail_personnel, naissance_personnel) VALUES('Goulet', 'Joseph', '2015-08-07', 'Artois Pierrette', '0343186240', 'joseph.goulet@gmail.com', '1959-12-19');";
}

String^ NS_Comp_Test::Test::Inserer_donnees_adresse(void) {
	return "insert into [DonneBDD_Test10].[dbo].[adresse](nom_voie, num_voie) VALUES ('rue frederic chopin', '93');";
}

String^ NS_Comp_Test::Test::Inserer_donnes_geographie(void) {
	return "insert into [DonneBDD_Test10].[dbo].[geographie](ville, pays) VALUES ('Vesoul', 'France');";
}

String^ NS_Comp_Test::Test::Selectionner_id_personnel(void) {
	return "select [personnel].[id_personnel], nom_personnel, prenom_personnel, date_embauche, titulaire, numero_tel_personnel, adresse_mail_personnel, naissance_personnel  from personnel where (nom_personnel = 'Goulet' and prenom_personnel = 'Joseph' and numero_tel_personnel = '0343186240');";
}

String^ NS_Comp_Test::Test::Selectionner_id_adresse(void) {
	return "select [adresse].[id_adresse], [adresse].[nom_voie], [adresse].[num_voie] from adresse where (nom_voie ='rue frederic chopin' and num_voie = '93'); ";
}

String^ NS_Comp_Test::Test::Selectionner_id_geographie(void) {
	return "select [geographie].[id_geographie], ville, pays from geographie where (ville = 'Vesoul' and pays = 'France');";
}




String^ NS_Comp_Test::Test::AjouterUnPersonnel() {
	System::String^ sql;

	sql = Inserer_donnees_personnel();
	this->oCad_Test->actionRows(sql);

	int^ id_personnel;
	System::Data::DataSet^ oDs_personnel;
	oDs_personnel = this->oCad_Test->getRows(Selectionner_id_personnel(), "personnel");
	id_personnel = System::Convert::ToInt32(oDs_personnel->Tables["personnel"]->Rows[0]["id_personnel"]->ToString());
	setID(id_personnel);

	if (oDs_personnel->Tables["personnel"]->Rows[0]["nom_personnel"] == "Goulet") {
		int^ a = 1;
	}
	else
	{
		int^ a = 0;
	}


	sql = Inserer_donnees_adresse();
	this->oCad_Test->actionRows(sql);

	int^ id_adresse;
	System::Data::DataSet^ oDs_adresse;
	oDs_adresse = this->oCad_Test->getRows(Selectionner_id_adresse(), "adresse");
	id_adresse = System::Convert::ToInt32(oDs_adresse->Tables["adresse"]->Rows[0]["id_adresse"]->ToString());
	setID(id_adresse);


	sql = Inserer_donnes_geographie();
	this->oCad_Test->actionRows(sql);

	int^ id_geographie;
	System::Data::DataSet^ oDs_geographie;
	oDs_geographie = this->oCad_Test->getRows(Selectionner_id_geographie(), "geographie");
	id_geographie = System::Convert::ToInt32(oDs_geographie->Tables["geographie"]->Rows[0]["id_geographie"]->ToString());
	setID(id_geographie);

	sql = "insert into [DonneBDD_Test10].[dbo].[vivre] (id_adresse, id_personnel) values ('" + id_adresse + "', '" + id_personnel + "');";
	this->oCad_Test->actionRows(sql);

	sql = "insert into [DonneBDD_Test10].[dbo].[localiser] (id_adresse, id_geographie) values ('" + id_adresse + "', '" + id_geographie + "');";
	this->oCad_Test->actionRows(sql);

	System::Data::DataSet^ oDs_vivre;
	oDs_vivre = this->oCad_Test->getRows("select * from vivre where (id_adresse = '" + id_adresse + "' and id_personnel = '" + id_personnel + "') ", "vivre");

	System::Data::DataSet^ oDs_localiser;
	oDs_localiser = this->oCad_Test->getRows("select * from localiser where (id_adresse = '" + id_adresse + "' and id_geographie = '" + id_geographie + "') ", "localiser");

	if (oDs_personnel->Tables["personnel"]->Rows[0]["nom_personnel"] == "Goulet") {
		if (oDs_personnel->Tables["personnel"]->Rows[0]["prenom_personnel"] == "Joseph") {
			if (oDs_personnel->Tables["personnel"]->Rows[0]["date_embauche"] == "2015-08-07") {
				if (oDs_personnel->Tables["personnel"]->Rows[0]["titulaire"] == "Artois Pierrette") {
					if (oDs_personnel->Tables["personnel"]->Rows[0]["numero_tel_personnel"] == "0343186240") {
						if (oDs_personnel->Tables["personnel"]->Rows[0]["adresse_mail_personnel"] == "joseph.goulet@gmail.com") {
							if (oDs_personnel->Tables["personnel"]->Rows[0]["naissance_personnel"] == "1959-12-19") {
								if (oDs_adresse->Tables["adresse"]->Rows[0]["nom_voie"] == "rue frederic chopin") {
									if (oDs_adresse->Tables["adresse"]->Rows[0]["num_voie"] == "93") {
										if (oDs_geographie->Tables["geographie"]->Rows[0]["ville"] == "Vesoul") {
											if (oDs_geographie->Tables["geographie"]->Rows[0]["pays"] == "France") {
												if (oDs_vivre->Tables["vivre"]->Rows[0]["id_adresse"] == id_adresse) {
													if (oDs_vivre->Tables["vivre"]->Rows[0]["id_personnel"] == id_personnel) {
														if (oDs_localiser->Tables["localiser"]->Rows[0]["id_adresse"] == id_adresse) {
															if (oDs_localiser->Tables["localiser"]->Rows[0]["id_geographie"] == id_geographie) {
																return "Test valider";
															}
															else
															{
																return "Test invalide";
															}
														}
														else
														{
															return "Test invalide";
														}
													}
													else
													{
														return "Test invalide";
													}
												}
												else
												{
													return "Test invalide";
												}

											}
											else
											{
												return "Test invalide";
											}
										}
										else
										{
											return "Test invalide";
										}

									}
									else
									{
										return "Test invalide";
									}
								}
								else
								{
									return "Test invalide";
								}
							}
							else
							{
								return "Test invalide";
							}
						}
						else
						{
							return "Test invalide";
						}

					}
					else
					{
						return "Test invalide";
					}
				}
				else
				{
					return "Test invalide";
				}

			}
			else
			{
				return "Test invalide";
			}
		}
		else
		{
			return "Test invalide";
		}
	}
}
