#pragma once
#include <string>
using std::string;
class Contacto{
  private:
  	string nombre;
  	int numero;
  	string tipo;
  public:
	Contacto(string,int,string);
	virtual ~Contacto();
	virtual string toString()const;	
};