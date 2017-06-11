
output: main.o NumberList.o
	g++ -std=c++11 main.o NumberList.o -o output

main.o: main.cpp
	g++ -std=c++11 -c main.cpp

NumberList.o: NumberList.cpp NumberList.h
	g++ -std=c++11 -c NumberList.cpp

clean:
	rm *.o output
