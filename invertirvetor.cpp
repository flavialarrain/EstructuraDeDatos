#include "stdafx.h"
#include<iostream>
#include <conio.h>
#define Max 50
using namespace std;


void Cargar(int vec[], int n);
void Mostrar(int vec[],int n);
void Invertir(int vec[],int n);

int main() {
	int vec[Max],n;
	cout<<"Ingrese el numero de elementos del vector"<<endl;
	cin>>n;
	Cargar(vec,n);
	Invertir(vec,n);
	Mostrar(vec,n);
	

	system("pause>null");
	return 0;
}

void Cargar(int vec[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Vec["<<i<<"]="<<endl;
		cin>>vec[i];
	}

}
void Mostrar(int vec[],int n)
{
for(int i=0;i<n;i++)
	{
		cout<<vec[i]<<" ";
	}
	
}
void Invertir(int vec[],int n)
{
int temporal;
int k=1;
	for(int i=0;i<n/2;i++)
	{
		temporal=vec[i];
		vec[i]=vec[n-k];
		vec[n-k]=temporal;
		k++;
	}
}