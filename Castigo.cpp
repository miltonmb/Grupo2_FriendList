#include "Contacto.h"
#include "Castigo.h"
#include <string>
#include <sstream>
using std::string;
using std::stringstream;

Castigo::Castigo(string nombre, int numero, string tipo, string  puntuacion, string tecnica):Contacto(nombre, numero, tipo),
	puntuacion(puntuacion), tecnica(tecnica){
}

Castigo::~Castigo(){
}

string Castigo::toString()const{
	stringstream ss;
	ss << Contacto::toString() << ",puntuacion:" << puntuacion << ",tecnica:" << tecnica;
	return ss.str();
}