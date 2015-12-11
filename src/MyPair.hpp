#ifndef MYPAIR_HPP_
#define MYPAIR_HPP_
#include <iostream>
#include <math.h>
#include "MyChar.hpp"
class MyPair {
private:
public:
	int occurrence;
	//static int total;
	static double pi;
	const static int ASCII_NUM = 256;

	MyChar B[ASCII_NUM];

	MyPair& operator++(int);
	MyChar& operator[](int);

	friend std::ostream& operator<<(std::ostream &os, const MyPair &mp);

	friend double computeEntropy(MyPair A[]) {
		for (int i = 0; i < ASCII_NUM; i++) {
			for (int j = 0; j < ASCII_NUM; j++) {
				if (A[i][j].occurrences) { // computing entropy for internal array
					pi = (double) A[i][j].occurrences / MyChar::total;
					MyChar::entropy -= pi * log2(pi);
				}
			}
		}
		return MyChar::entropy;
	}
	int sizeOfInner() {
		int temp = 0;
		for (int i = 0; i < ASCII_NUM; ++i) {
			if (B[i].occurrences)
				temp += B[i].occurrences;
		}
		return temp;
	}
};

#endif /* MYPAIR_HPP_ */
