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
	ss << "ONombre: " << nombre << ", Numero: " << numero;
	return ss.str();
}


