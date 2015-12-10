/*
 * MyPair.cpp
 *
 *  Created on: Dec 5, 2015
 *      Author: fox
 */
#include "MyPair.hpp"
#include "MyChar.hpp"
double MyPair::pi = 0;
MyChar B= { };
//int MyPair::occurrences=0;
MyPair MyPair::operator++(int) {
	this->occurrence++;
	MyChar::total++;
	return *this;
}

MyChar& MyPair::operator[](int idx) {
	return B[idx];
}

std::ostream& operator<<(std::ostream &os, const MyPair &mp) {
	std::cout <<mp.occurrence << std::endl;
	return os;
}
