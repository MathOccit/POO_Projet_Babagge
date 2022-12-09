#pragma once
#include "pch.h"

using namespace System;

namespace NS_Comp_Svc
{
	public ref class ServicePersonnel
	{
	private:
		NS_Comp_Data::CLcad^ oCad_Personnel;
		NS_Comp_Mappage::MappPersonnel^ oMappPersonnel;

	public:
		ServicePersonnel(void);
		Data::DataSet^ SelectionnerTousLesPersonnels(String^);
		void AjouterUnPersonnel(String^, String^, String^, String^, String^, String^, String^, String^, String^, String^, String^);
		void ModifierUnPersonnel(String^, String^, String^, String^, String^, String^, String^, String^, String^, String^, String^, String^, String^, String^);
		void AfficherUnPersonnel(int);
		void SupprimerUnPersonnel(String^);
		Data::DataSet^ Rechercher(String^, String^, String^);
		Data::DataSet^ RechercherModif(String^, String^, String^);
	};
}