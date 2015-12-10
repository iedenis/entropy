all: Entropy
#compile:
	#g++ -std=c++11 -Wall -g MyPair.cpp MyChar.cpp main.cpp -o entropy
Entropy: MyChar.o MyPair.o main.o
	g++ -std=c++11 -g -o Entropy MyChar.o MyPair.o main.o

MyPair.o MyChar.o main.o: MyPair.cpp MyChar.cpp main.cpp
	g++ -std=c++11 -c -Wall -g main.cpp MyPair.cpp MyChar.cpp

clean:
	rm main.o MyPair.o MyChar.o Entropy
			
