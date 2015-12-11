#include "MyChar.hpp"
#include "MyPair.hpp"
#include <iostream>
double MyChar::entropy=0.0;
int MyChar::total=0;

std::ostream& operator<<(std::ostream &os, const MyChar &ch){
std::cout<<ch.occurrences;
	return os;
}

MyChar& MyChar:: operator++(int ){
	this->occurrences++;
	return *this;
}








