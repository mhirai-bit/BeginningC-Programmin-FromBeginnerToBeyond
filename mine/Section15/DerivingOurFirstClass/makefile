output: main.o Account.o Savings_Account.o
	g++ main.o Account.o Savings_Account.o -o output

main.o: main.cpp
	g++ -c main.cpp

Account.o: Account.cpp Account.h
	g++ -c Account.cpp

Savings_Account.o: Savings_Account.cpp Savings_Account.h
	g++ -c Savings_Account.cpp

clean:
	rm* .o output
