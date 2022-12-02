#pragma once

using namespace System;
/*namespace NS_Comp_Mappage
{
	ref class MappStandard
	{
	public:
		~MappStandard(void);
		virtual String^ Selectionne(void) = 0;
		virtual String^ Inserer(void)=0;
		virtual String^ Suppr(void)=0;
		virtual String^ Modifier(void)=0;

	private:
		String^ sSql;
	};
}
__interface IMappStandard
{
public:
	virtual String^ Selectionne(void) = 0;
	virtual String^ Inserer(void) = 0;
	virtual String^ Suppr(void) = 0;
	virtual String^ Modifier(void) = 0;
	~IMappStandard ();
};*/

interface class MappStandard1
{
public:
	virtual String^ Selectionne(void) = 0;
	virtual String^ Inserer(void) = 0;
	virtual String^ Suppr(void) = 0;
	virtual String^ Modifier(void) = 0;
	static String^ sSql;
};