#include "Contacto.h"
#include "Familiar.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Familiar::Familiar(string nombre, int numero, string tipo, string  consaguinidad, string parentesco):Contacto(nombre, numero,tipo),
	consaguinidad(consaguinidad), parentesco(parentesco){
}

Familiar::~Familiar(){
}

string Familiar::toString()const{
	stringstream ss;
	ss << Contacto::toString() << ",consaguinidad: " << consaguinidad << ",parentesco:" << parentesco;
	return ss.str();
}