CXX = g++
CXXFLAGS -std=c++11 -Wall -g


main: main.o Ship.o Vect2f.o
	$(CXX) $(CXXFLAGS) -o main main.o ship.o vect2f.o

main.o: main.cpp Ship.h Vect2f.h World.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Ship.o: Ship.h

Vect2f.o: Vect2f.h

clean:
	rm *.o
