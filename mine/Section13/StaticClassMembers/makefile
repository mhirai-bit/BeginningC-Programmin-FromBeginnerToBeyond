output: main.o Player.o
	g++ main.o Player.o -o output

main.o: main.cpp
	g++ -c main.cpp

Player.o: Player.cpp Player.h
	g++ -c Player.cpp

clean:
	rm* .o output
