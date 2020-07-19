cc = g++
CFLAGS = -c -Wall

all: composerDatabase
	

composerDatabase: main.o database.o composer.o
	g++ main.o database.o composer.o -o composerDatabase
	
main.o: main.cpp database.o
	$(cc) $(CFLAGS) main.cpp

database.o: database.h database.cpp
	$(cc) $(CFLAGS) database.cpp

composer.o: composer.h composer.cpp
	$(cc) $(CFLAGS) composer.cpp
	
clean:
	rm -f core *.o *~


