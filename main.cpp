#include <iostream>
#include <string.h>
#include <stdio.h>
#include <vector>
#include "Contacto.h"
#include "Amigo.h"
#include "Familiar.h"
#include "Companero.h"
#include <fstream>
using namespace std;

int main(){
	vector<Contacto>contactos;
	string nombre;
	int numero = 0;
	string user;
	int anios = 0;
	string consanguinidad;
	string parentesco;
	string clase;
	string respuesta;
	int opcion = 0;
	char r = 's';
	while(r == 's' || r=='S'){
		cout << "---BIENVENIDO---"<<endl;
		cout << "Menu:\n1.Agregar\n2.Listar\n3.Guardar y Salir"<<endl;
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

					break;
					}
				}
								
			break;
			}
			
			case 2:{
				for(int i = 0; i < contactos.size(); i++){
						
				}
			break;
			}

			case 3:{
				for(int i = 0;i < contactos.size(); i++){
								
				}
			
			break;
			}
			
		}
		cout << "Desea continuar[s/n]: ";
		cin >> r;
		cout << endl;
	}


}
