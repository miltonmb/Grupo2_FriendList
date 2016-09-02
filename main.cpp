#include <iostream>
#include <string.h>
#include <stdio.h>
#include <vector>
#include "Contacto.h"
#include "Amigo.h"
#include "Familiar.h"
#include "Companero.h"
#include "Castigo.h"
#include <fstream>
void cargarArchivo();
using namespace std;

int main(){
	ofstream fichero;
	vector<Contacto*>contactos;
	string nombre;
	int numero = 0;
	string user;
	int anios = 0;
	string consanguinidad;
	string parentesco;
	string clase;
	string respuesta;
	string puntuacion;
	string tecnica;
	int opcion = 0;
	char r = 's';
	while(r == 's' || r=='S'){
		cout << "---BIENVENIDO---"<<endl;
		cout << "Menu:\n1.Agregar\n2.Listar\n3.Guardar"<<endl;
		cin >> opcion;
		switch(opcion){
			case 1:{
				int agg = 0;
				cout << "---Agregar---\n";
				cout << "Que tipo de contacto desea Agregar:\n1.Amigos\n2.Familiares\n3.Compañeros"<<endl;
				cin >> agg;
				cout << endl;
				switch(agg){
					case 1:{
						cout <<"---AMIGOS---"<<endl;
						cout << "Ingrese el nombre: ";
						cin >> nombre;
						cout << endl;
						cout << "Ingrese el numero: ";
						cin >> numero;
						cout << endl;
						cout << "Ingrese el numero de años: ";
						cin >> anios;
						cout << endl;
						cout << "Ingrese el USERNAME: ";
						cin >> user;
						cout << endl;
						Amigo* a = new Amigo(nombre,numero,anios,user);
						contactos.push_back(a); 
						
					break;
					}
					
					case 2:{
						cout <<"---FAMILIARES---"<<endl;
                                                cout << "Ingrese el nombre: ";
                                                cin >> nombre;
                                                cout << endl;
                                                cout << "Ingrese el numero: ";
                                                cin >> numero;
                                                cout << endl;
                                                cout << "Ingrese el grado de consanguinidad: ";
                                                cin >> consanguinidad;
                                                cout << endl;
                                                cout << "Ingrese el grado de parentesco: ";
                                                cin >> parentesco;
                                                cout << endl;
						Familiar* f = new Familiar(nombre,numero,consanguinidad,parentesco);
						contactos.push_back(f);
						
				
					break;
					}
					
					case 3:{
						cout <<"---COMPAÑEROS---"<<endl;
                                                cout << "Ingrese el nombre: ";
                                                cin >> nombre;
                                                cout << endl;
                                                cout << "Ingrese el numero: ";
                                                cin >> numero;
                                                cout << endl;
                                                cout << "Ingrese la clase que llevaron juntos: ";
                                                cin >> clase;
                                                cout << endl;
                                                cout << "Ingrese si trabajaria junto a esta persona: ";
                                                cin >> respuesta;
                                                cout << endl;
						Companero* c = new Companero(nombre,numero,clase,respuesta);
						contactos.push_back(c);

					break;
					}
					case 4:{
						cout <<"---CASTIGO---"<<endl;
                                                cout << "Ingrese el nombre: ";
                                                cin >> nombre;
                                                cout << endl;
                                                cout << "Ingrese el numero: ";
                                                cin >> numero;
                                                cout << endl;
                                                cout << "Ingrese la puntuacion: ";
                                                cin >> puntuacion;
                                                cout << endl;
                                                cout << "Ingrese la tecnica: ";
                                                cin >> tecnica;
                                                cout << endl;
						Castigo* cast = new Castigo(nombre,numero,puntuacion,tecnica);
						contactos.push_back(cast);
					break;
					}
				}
								
			break;
			}
			
			case 2:{
				cout << "---TODOS LOS CONTACTOS---"<<endl;
				for(int i = 0; i < contactos.size(); i++){
				cout << contactos[i]->toString()<<endl;
				
				}
			break;
			}

			case 3:{
				fichero.open("contactos.txt");
				for(int i = 0;i < contactos.size(); i++){                               
                                	fichero << contactos[i]->toString();
                                	fichero << "\n";				
				}
				fichero.close();
			
			break;
			}
			
		}
		cout << "Desea continuar[s/n]: ";
		cin >> r;
		cout << endl;
	}
}
