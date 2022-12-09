#pragma once

#include "MappStock.h"
#include "pch.h"
#include "GCompAD.h"
#include "MappStock.h"

using namespace System;

namespace NS_Comp_Svc
{
	public ref class ServiceStock
	{
	private:
		NS_Comp_Data::CLcad^ oCad_Stock;
		NS_Comp_Mappage::MappStock^ oMappStock;

	public:
		ServiceStock(void);

		Data::DataSet^ SelectionnerTousLeStock(String^);
		void AjouterUnStock(String^, String^, String^, String^, String^, String^, String^, String^);
		void ModifierUnStock(String^ , String^, String^, String^, String^, String^, String^, String^, String^ , String^ );
		void AfficherUnStock(int);
		void SupprimerUnStock(String^);
		Data::DataSet^ Rechercher(String^, String^);
	};
}

