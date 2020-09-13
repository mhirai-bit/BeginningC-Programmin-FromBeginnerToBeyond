output: main.o Account.o
	g++ main.o Account.o -o output

main.o: main.cpp
	g++ -c main.cpp

Account.o: Account.cpp Account.h
	g++ -c Account.cpp

clean:
	rm * .o output
