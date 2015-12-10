/*

 * MyChar.cpp
 *
 *  Created on: Dec 5, 2015
 *      Author: fox
 */
#include "MyChar.hpp"
#include "MyPair.hpp"
#include <iostream>
int MyChar::total=0;
double MyChar::entropy=0.0;

std::ostream& operator<<(std::ostream &os, const MyChar &ch){
std::cout<<ch.occurrences;
	return os;
}
MyChar& MyChar:: operator++(int ){
	this->occurrences++;
	return *this;
}








