
#include "StdAfx.h"
#include "Ccomplejo.h"


Ccomplejo::Ccomplejo(void)
{}
	double Ccomplejo::Get_real()
	{return real;}
	double Ccomplejo::Get_imag()
	{return imag;}
	void Ccomplejo::Set_real(double r)
	{real=r;}
	void Ccomplejo::Set_imag(double i)
	{imag=i;}
	void Ccomplejo::Suma (Ccomplejo a, Ccomplejo b)
	{real= a.real+b.real;
	imag=a.imag+b.imag;}

