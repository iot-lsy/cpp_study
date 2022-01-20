all: RacingMain

RacingMain: Car.o RacingMain.o
	g++ -o RacingMain RacingMain.o Car.o

Car.o: Car.h Car.cpp
	g++ -c -o Car.o Car.cpp

RacingMain.o: RacingMain.cpp Car.h
	g++ -c -o RacingMain.o RacingMain.cpp

