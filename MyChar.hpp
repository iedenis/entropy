/*
 * MyChar.hpp
 *
 *  Created on: Dec 1, 2015
 *      Author: fox
 */

#ifndef MYCHAR_HPP_
#define MYCHAR_HPP_
#include <string>
#include <iostream>
class MyChar {
private:

public:
	static int entropy;
	static int total;
//MyChar& operator++(int);

};

std::ostream& operator<<(std::ostream &os, const MyChar &ch);

#endif /* MYCHAR_HPP_ */
