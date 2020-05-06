default: bankapp

account.o:
	g++ -c account.cpp
checking.o:
	g++	-c checking.cpp
savings.o:
	g++ -c savings.cpp
creditcard.o:
	g++ -c creditcard.cpp
bankapp: account.o checking.o savings.o creditcard.o
	g++ -o bankapp main.cpp	account.o checking.o savings.o creditcard.o
clean:
	del -f bankapp.exe account.o checking.o savings.o creditcard.o
