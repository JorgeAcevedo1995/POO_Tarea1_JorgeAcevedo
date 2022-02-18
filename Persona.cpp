#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Persona {
	//atributos
	protected: string nombres,apellidos,direccion,fn;
			   int telefono;
	//metas
	protected: 
	//constructor
	Persona(string nom,string ape,string dir,string f,int tel){
		nombres=nom;
		apellidos=ape;
		direccion=dir;
		fn=f;
		telefono = tel;
		
	}
	//metodo
	void leer();
	void crear();
	void actualizar();
	void borrar();	
};


