#include "Persona.cpp"
#include <iostream>
using namespace std;

class Cliente : Persona{
	//atributos
	private: string nit;
	public: Cliente(){
			}
	
			Cliente(string nom,string ape,string dir,string f,int tel, string n): Persona(nom,ape,dir,f,tel){
			nit=n;
			}
	//metodo
	void leer(){
		cout<<"-------- Metodo Leer -------"<<endl;
		cout<<"Nit: "<<nit<<endl;
		cout<<"Nombres: "<<nombres<<endl;
		cout<<"Apellidos: "<<apellidos<<endl;
		cout<<"Direccion: "<<direccion<<endl;
		cout<<"Telefono: "<<telefono<<endl;
		cout<<"Fecha Nacimiento: "<<fn<<endl;
	}
};

