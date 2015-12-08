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
	const static int ASCII_NUM = 256;

	MyChar B[ASCII_NUM];

	MyPair operator++(int);
	MyChar& operator[](int);
	friend std::ostream& operator<<(std::ostream &os, const MyPair &mp);
	friend double computeEntropy(MyPair A[]) {
		int subEntropy = 0;
		for (int i = 0; i < ASCII_NUM; i++) {
			for (int j = 0; j < ASCII_NUM; j++) {
				if (A[i][j].occurrences) {
					pi = (double) A[i][j].occurrences / MyChar::total;
					std::cout << "  -  Probability is " << pi << std::endl;
					std::cout << "entropy for letter " << (char) i << " is "
							<< -pi * log2(pi) << std::endl;

					subEntropy -= pi * log2(pi);
				}
			}
			MyChar::entropy -= A[i].pi * subEntropy;

		}
		return MyChar::entropy;
	}
};

#endif /* MYPAIR_HPP_ */
