#pragma once
#include "Contacto.h"
#include <string>
using std::string;

class Companero: public Contacto{
	string clase;
	string  trabajo;
  public:
	Companero(string,int,string, string,string);
	virtual ~Companero();
	virtual string toString()const;
};