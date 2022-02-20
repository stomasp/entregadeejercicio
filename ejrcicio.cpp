#include <iostream>
using namespace std;

class Personas{
	protected: string nombre, apellido, direccion,fena;
	 int telefono;
	 
	 protected:
	  Personas(){
	  }
	 Personas (string nom, string ape, string dir, string fn, int tel){
	 	nombre=nom;
	 	apellido=ape;
	 	direccion=dir;
	 	fena=fn;
	 	telefono=tel;
	 }
	 void mostrar();
};
