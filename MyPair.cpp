/*
 * MyPair.cpp
 *
 *  Created on: Dec 5, 2015
 *      Author: fox
 */
#include "MyPair.hpp"

double MyPair::pi=0;
MyPair MyPair::operator ++(int){
	this->occurrence++;
	return *this;
}

MyPair MyPair::operator[](int){
		return *this;
}
 std::ostream& operator<<(std::ostream &os, const MyPair &mp){
	 std::cout<<mp.occurrence<<std::endl;
	return os;
}
// int  computeEntropy(MyPair A[]){}
