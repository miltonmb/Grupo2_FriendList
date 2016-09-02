#include "Contacto.h"
#include "Amigo.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Amigo::Amigo(string nombre, int numero, int years,string nombref):Contacto(nombre, numero),
	nombref(nombref), years(years){
	tipo = "Amigo";
}

Amigo::~Amigo(){
}

string Amigo::toString()const{
	stringstream ss;
	ss << Contacto::toString() << ",facebook: " << nombref << ",años:" << years;
	return ss.str();
}