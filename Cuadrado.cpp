#include "StdAfx.h"
#include "Cuadrado.h"


Cuadrado::Cuadrado(void)
{

int Get_lado();
	int get_area();
	int set_lado(int L);
	int set_area(int a);
	int Calcular();

	}


int Cuadrado:: Get_lado()
	{return lado;}

	int Cuadrado::Get_area()
		{return area;}

	void Cuadrado::Set_lado(int L)
	{lado=L;}
	void Cuadrado::Set_area(int a)
	{area=a;}
	int Cuadrado::Calcular()
	{area=lado*lado;
	return area;}