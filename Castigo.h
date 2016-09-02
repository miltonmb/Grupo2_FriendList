#pragma once
#include "Contacto.h"
#include <string>
using std::string;

class Castigo: public Contacto{
	string puntuacion;
	string tecnica;
  public:
	Castigo(string,int, string,string);
	virtual ~Castigo();
	virtual string toString()const;
};