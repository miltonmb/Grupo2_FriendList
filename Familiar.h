#pragma once
#include "Contacto.h"
#include <string>
using std::string;

class Familiar: public Contacto{
	string consaguinidad;
	string  parentesco;
  public:
	Familiar(string,int, string,string);
	virtual ~Familiar();
	virtual string toString()const;
};