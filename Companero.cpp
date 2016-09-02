#include "Contacto.h"
#include "Companero.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Companero::Companero(string nombre, int numero, string tipo, string  clase, string trabajo):Contacto(nombre, numero, tipo),
	clase(clase), trabajo(trabajo){
}

Companero::~Companero(){
}

string Companero::toString()const{
	stringstream ss;
	ss << Contacto::toString() << ",clase: " << clase << ",trabajo:" << trabajo;
	return ss.str();
}