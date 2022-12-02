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

void NS_Comp_Mappage::MappCommande::setDateLivraison(String^ DateLivraison)
{
    this->DateLivraison = DateLivraison;
}

void NS_Comp_Mappage::MappCommande::setDateEmission(String^ DateEmission)
{
    this->DateEmission= DateEmission;
}

void NS_Comp_Mappage::MappCommande::setQuantiteArticles(int^ quantiteArticles)
{
    this->quantiteArticles = quantiteArticles;
}

String^ NS_Comp_Mappage::MappCommande::Selectionne(void)
{
    return "SELECT [ID], [date_livraison_commande], [date_emission_commande], [quantite_article],[ref_commande],[prix_commande] FROM [Projet].[dbo].[commande]";
}

String^ NS_Comp_Mappage::MappCommande::Inserer(void)
{
    return "INSERT INTO Commandes (Date Livraison, Date Emission, Quantite Article) VALUES('" + this->DateLivraison + "','" + this->DateEmission + "','" + this->quantiteArticles + "');";
}

String^ NS_Comp_Mappage::MappCommande::Suppr(void)
{
    return "DELETE FROM Commandes WHERE [id]";
}

String^ NS_Comp_Mappage::MappCommande::Modifier(void)
{
    return "UPDATE Commandes SET DateLivraison = " + this->DateLivraison + "', DateEmission = '" + this->DateEmission + "', quantiteArticles'" + this->quantiteArticles + "WHERE" + this->ID +';';
}
