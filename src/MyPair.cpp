#include "MyPair.hpp"
#include "MyChar.hpp"
double MyPair::pi = 0;
MyChar B= { };
//int MyPair::total=0;
MyPair& MyPair::operator++(int) {
	this->occurrence++;
	//MyChar::total++;
	return *this;
}

MyChar& MyPair::operator[](int idx) {
	return B[idx];
}

std::ostream& operator<<(std::ostream &os, const MyPair &mp) {
	std::cout <<mp.occurrence << std::endl;
	return os;
}
