#pragma once

using namespace System;
namespace NS_Comp_Mappage
{
	ref class MappStandard
	{
	public:
		MappStandard();
		~MappStandard();
		virtual String^ Selectionne(void);
		virtual String^ Inserer(void);
		virtual String^ Suppr(void);
		virtual String^ Modifier(void);

	private:
		String^ sSql;
	};
}