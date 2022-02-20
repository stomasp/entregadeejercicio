#include "Personas.cpp"
#include <iostream>

using namespace std;

class Propietario: Persona {
	//tributos
	private: string nit;
	double cui;
	
	public: 
	Propietario (){
	}
	Propietario(string nom,string ape, string dir, string fn, int tel): Personas(nom,ape,dir,fn,tel){
		nit=n;
		cui=x;
		
	}
	//set modificar
	void setNit(string n){nit=n;}
	void setCui(int cui){cui=x;}
	void setNombre(string nom){nombre=nom;}
	void setApellido(string ape){apellido=ape;}
	void setDireccion(string dir){direccion=dir;}
	void setTelefono(int tel){telefono=tel;}
	
	//get mostrar 
	string getNit(){return nit;}
	string getCui(){return cui;}
	string getNombre(){return nombre;}
	string getApellido(){return apellido;}
	string getDireccion(){return direccion;}
	int getTelefono(){return telefono;}
	
	void mostrar(){
		cout<<"____________________"<<endl;
		cout<<nit<<","<<cui<<","<<nombre<<","<<apellidos<<","<<direccion<<","<<telefono<<endl;
		
	}
};


