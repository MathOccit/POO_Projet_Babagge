#pragma once
#include "pch.h"

using namespace System;

namespace NS_Comp_Svc
{
	public ref class ServiceCommandes
	{
	private:
		NS_Comp_Data::CLcad^ oCad_Command;
		NS_Comp_Mappage::MappCommande^ oMappCommand;

	public:
		ServiceCommandes(void);
		Data::DataSet^ SelectionnerToutesLesCommand(String^);
		void AjouterUneCommand(String^, String^, int^);
		void ModifierUneCommand(String^, String^, int);
		void AfficherUneCommand(int);
		void SupprimerUneCommand(String^);
		Data::DataSet^ Rechercher(String^, String^);
	};
}