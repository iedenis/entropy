/*
 * MyPair.hpp
 *
 *  Created on: Dec 1, 2015
 *      Author: fox
 */

#ifndef MYPAIR_HPP_
#define MYPAIR_HPP_
#include <iostream>
#include <math.h>
#include "MyChar.hpp"
class MyPair {
private:
public:
	 int occurrence;
		static double pi;

	MyChar A[];

	MyPair operator++(int);
	MyPair operator[](int);
	friend std::ostream& operator<<(std::ostream &os, const MyPair &mp);
	friend int computeEntropy(MyPair A[]){
		for (int i = 0; i < 256; i++){
			     if (A[i].occurrence){
			       pi = (double)A[i].occurrence/MyChar::total;
			       std::cout << "  -  Probability is " << pi << std::endl;
			       MyChar::entropy -=  pi *log2(pi);
	}
		}
		return MyChar::entropy;
	}

};

#endif /* MYPAIR_HPP_ */
