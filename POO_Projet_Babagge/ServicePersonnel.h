#pragma once
#include "GCompAD.h"
#include "MappPersonnel.h"

using namespace System;

namespace NS_Comp_Svc
{
	public ref class ServicePersonnel
	{
	private:

		NS_Comp_Data::CLcad oCad_Perso;
		NS_Comp_Mappage::MappPersonnel oMappPerso;

	public:

		ServicePersonnel(void);

		Data::DataSet^ SelectionnerTousLesPersonnels(String^);
		void AjouterUnPersonnel(String^, String^, String^, String^, String^, String^, String^, String^, String^, String^, String^);
		void ModifierUnPersonnel(String^, String^, String^, String^, String^, String^, String^, String^, String^, String^, String^);
		void AfficherUnPersonnel(int);
		void SupprimerUnPersonnel(int);
	};
}