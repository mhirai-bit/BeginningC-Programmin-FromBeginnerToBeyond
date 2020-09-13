output: main.o Movie.o Movies.o
	g++ main.o Movie.o Movies.o -o output

main.o: main.cpp
	g++ -c main.cpp

Movie.o: Movie.cpp Movie.h
	g++ -c Movie.cpp

Movies.o: Movies.cpp Movies.h
	g++ -c Movies.cpp

clean:
	rm *.o output
