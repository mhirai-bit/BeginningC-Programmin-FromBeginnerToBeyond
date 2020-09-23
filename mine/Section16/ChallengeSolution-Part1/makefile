output: main.o Account.o Savings_Account.o Trust_Account.o Checking_Account.o Account_Util.o
	g++ main.o Account.o Savings_Account.o Trust_Account.o Checking_Account.o Account_Util.o -o output

main.o: main.cpp
	g++ -c main.cpp

Account.o: Account.cpp Account.h
	g++ -c Account.cpp

Savings_Account.o: Savings_Account.cpp Savings_Account.h
	g++ -c Savings_Account.cpp

Trust_Account.o: Trust_Account.cpp Trust_Account.h
	g++ -c Trust_Account.cpp

Checking_Account.o: Checking_Account.cpp Checking_Account.h
	g++ -c Checking_Account.cpp

Account_Util.o: Account_Util.cpp Account_Util.h
	g++ -c Account_Util.cpp

clean:
	rm* .o output
