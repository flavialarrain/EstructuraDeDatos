#include <iostream>
#include <conio.h>
#include <stdlib.h>
 
using namespace std;
	struct Nodo {
		int datos;
		int veces;
		Nodo *siguiente;
	};
	void insertarCola(Nodo *&,Nodo *&,int);
	bool cola_vacia(Nodo *);
	int main (){
		Nodo *frente = NULL;
		Nodo *fin = NULL;

		int dato;
		cout<< "digite un numero";
		cin>>dato;
		cout<< "ingrese el tama;o de tu cola";
		cin>>veces;
		insertarCola(frente,fin,dato);
		getch ();
		return 0;
	}

		void insertarCola(Nodo *&frente,Nodo *&fin,int n){
			Nodo *nuevo_nodo= new Nodo();
			nuevo_nodo->dato = n;
			nuevo_nodo->siguiente= NULL;
			if(cola_vacia(frente)){
				frente = nuevo_nodo;
			}
			else{
			fin->siguiente = nuevo_nodo;
			}
			fin = nuevo_nodo;
			cout<<"elemento"<<n<<"insertado a cola correctamente"<<endl;

		}
		bool cola_vacia(Nodo *frente){
		if(frente==NULL){
			return true;
		}
		else{
			return false;
		}
		}