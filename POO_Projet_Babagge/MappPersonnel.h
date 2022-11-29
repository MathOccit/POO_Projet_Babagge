#pragma once

using namespace System;

namespace NS_Comp_Mappage
{
	public ref class MappPersonnel
	{
	private:

		String^ dateEmbauche;
		String^ titulaire;

	public:
		MappPersonnel(void);

		String^ getDateEmbauche(void);
		String^ getTitulaire(void);
		void setDateEmbauche(String^);
		void setTitulaire(String^);

		String^ Selectionner(void);
		String^ Ajouter(void);
		String^ Supprimer(void);
		String^ Modifier(void);

	};
}