#include "stdafx.h"
#include <iostream>

#define Max 50


using namespace std;
//Definicion de funciones
void Cargar(int V[], int n)
{	
	cout<<"Ingrese los datos numericos del vector"<<endl;
	for(int i=0;i<n;i++)
	{	cout<<"Vec""["<<i<<"]=";
	cin>>V[i];
		
	}
}
void Mostrar(int vec[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout << vec[i] << " "<<endl;
	}

}
void Concatenar(int V[],int v1[],int v2[], int n1, int n2)
{	 int N=n1+n2;

	for(int i=0;i<n1;i++)
	{
		V[i]=v1[i];

	}
	for(int i=n1,j=0;j<n2;j++,i++)
	{
		V[i]=v2[j];	
	}
	for(int i=0;i<N;i++)
	{cout << V[i] << " ";}
}

int main()
{ int V[Max],vec[Max], vec1[Max];
  int n1;
  int n2;
	cout<<"Cantidad de elementos del vector A"<<endl;
	cin>>n1;
	Cargar(vec,n1);
    mostrar(vec,n1);
    cout<<"Cantidad de elementos del vector B"<<endl;
	cin>>n2;
	Cargar(vec1,n2);
	Mostrar(vec1,n2);
	cout<<"EL vector resultante es"<<endl;
	Concatenar(V,vec,vec1,n1,n2);
	

	system("pause>null");
	
	return 0;
}