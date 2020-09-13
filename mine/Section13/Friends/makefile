output: main.o Friend_class.o Other_class.o Player.o
	g++ main.o Friend_class.o Other_class.o Player.o -o output

main.o: main.cpp
	g++ -c main.cpp

Friend_class.o: Friend_class.cpp Friend_class.h
	g++ -c Friend_class.cpp

Other_class.o: Other_class.cpp Other_class.h
	g++ -c Other_class.cpp

Player.o: Player.cpp Player.h
	g++ -c Player.cpp Player.h

clean:
	rm *.o output
