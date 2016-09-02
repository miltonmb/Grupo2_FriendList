#pragma once
#include <string>
using std::string;
class Contacto{
  private:
  	string nombre;
  	int numero;
  
  public:
  	string tipo;
	Contacto(string,int);
	virtual ~Contacto();
	virtual string toString()const;	
};