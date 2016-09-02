Contacto: main.o Amigo.o Companero.o Castigo.o Familiar.o Contacto.o
	g++ main.o Amigo.o Companero.o Castigo.o Familiar.o Contacto.o -o Contacto

main.o:	main.cpp Contacto.h Familiar.h Castigo.h Companero.h Amigo.h 
	g++ -c main.cpp

Amigo.o:	Amigo.cpp Contacto.h  Amigo.h
	g++ -c Amigo.cpp

Companero.o:	Companero.cpp Contacto.h  Companero.h
	g++ -c Companero.cpp

Castigo.o:	Castigo.cpp Contacto.h  Castigo.h
	g++ -c Castigo.cpp

Familiar.o:	Familiar.cpp Contacto.h  Familiar.h
	g++ -c Familiar.cpp

Contacto.o:	Contacto.cpp Contacto.h
	g++ -c Contacto.cpp