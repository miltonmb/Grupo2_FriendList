
main.o:	main.cpp  Castigo.h Companero.h Familiar.h Amigo.h 
	g++ -c main.cpp

Amigo.o:	Amigo.cpp   Amigo.h
	g++ -c Amigo.cpp

Familiar.o:	Familiar.cpp   Familiar.h
	g++ -c Familiar.cpp

Companero.o: Companero.cpp   Companero.h
	g++ -c Companero.cpp

Castigo.o:	Castigo.cpp   Castigo.h
	g++ -c Castigo.cpp
