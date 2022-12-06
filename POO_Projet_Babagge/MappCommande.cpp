#include "pch.h"
#include "MappCommande.h"

String^ NS_Comp_Mappage::MappCommande::getDateLivraison(void)
{
    return this->DateLivraison;
}

String^ NS_Comp_Mappage::MappCommande::getDateEmission(void)
{
    return this->DateEmission;
}

int^ NS_Comp_Mappage::MappCommande::getQuantiteProduit(void)
{
    return this->quantiteArticles;
}

void NS_Comp_Mappage::MappCommande::setID(String^ ID)
{
    this->ID = ID;
}

void NS_Comp_Mappage::MappCommande::setDateLivraison(String^ DateLivraison)
{
    this->DateLivraison = DateLivraison;
}

void NS_Comp_Mappage::MappCommande::setDateEmission(String^ DateEmission)
{
    this->DateEmission= DateEmission;
}

void NS_Comp_Mappage::MappCommande::setRef(String^ Ref)
{
    this->Ref = Ref;
}

void NS_Comp_Mappage::MappCommande::setQuantiteArticles(int^ quantiteArticles)
{
    this->quantiteArticles = quantiteArticles;
}

String^ NS_Comp_Mappage::MappCommande::Selectionne(void)
{
    return "SELECT * FROM [DonneBDD_Test10].[dbo].[commande]";
}

String^ NS_Comp_Mappage::MappCommande::Inserer(void)
{
    return "INSERT INTO Commandes (Date Livraison, Date Emission, Quantite Article) VALUES('" + this->DateLivraison + "','" + this->DateEmission + "','" + this->quantiteArticles + "');";
}

String^ NS_Comp_Mappage::MappCommande::Suppr(void)
{
    return "DELETE FROM [DonneBDD_Test10].[dbo].[stocker] WHERE [stocker].[id_commande] = '" + this->ID + "'; DELETE FROM [DonneBDD_Test10].[dbo].[commander] WHERE [commander].[id_commande] = '" + this->ID + "';DELETE FROM [DonneBDD_Test10].[dbo].[reduire] WHERE [reduire].[id_commande] = '" + this->ID + "';DELETE FROM [DonneBDD_Test10].[dbo].[payer] WHERE [payer].[id_commande] = '" + this->ID + "';DELETE FROM [DonneBDD_Test10].[dbo].[commande] WHERE [commande].[id_commande] = '" + this->ID + "';";
}

String^ NS_Comp_Mappage::MappCommande::Modifier(void)
{
    return "UPDATE Commandes SET DateLivraison = " + this->DateLivraison + "', DateEmission = '" + this->DateEmission + "', quantiteArticles'" + this->quantiteArticles + "WHERE" + this->ID +';';
}

System::String^ NS_Comp_Mappage::MappCommande::Rechercher(void)
{
    return "SELECT * FROM [DonneBDD_Test10].[dbo].[commande] WHERE [commande].[ref_commande] LIKE '%" + this->Ref + "%';";
}
