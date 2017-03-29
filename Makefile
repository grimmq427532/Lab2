main: rating.o main.o
	g++ -o main rating.o main.o
	
rating.o: rating.cpp rating.h
	g++ -c rating.cpp
	
main.o: main.cpp rating.h
	g++ -c main.cpp

clean:
	rm *.o