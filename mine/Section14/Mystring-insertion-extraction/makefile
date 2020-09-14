output: main.o Mystring.o
	g++ main.o Mystring.o -o output

main.o: main.cpp
	g++ -c main.cpp

Mystring.o: Mystring.cpp Mystring.o
	g++ -c Mystring.cpp

clean:
	rm* .o output
