#include "Contacto.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Contacto::Contacto(string nombre, int numero): nombre(nombre), numero(numero){
}

Contacto::~Contacto(){
}

string Contacto::toString()const{
	stringstream ss;
	ss << "Tipo:" << tipo<<",Nombre:"<<nombre << ",Numero:" << numero << ",Tipo:"<<tipo;
	return ss.str();
}


