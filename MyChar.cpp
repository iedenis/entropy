/*

 * MyChar.cpp
 *
 *  Created on: Dec 5, 2015
 *      Author: fox
 */
#include "MyChar.hpp"
#include <iostream>
int MyChar::total=0;
int MyChar::entropy=0;
std::ostream& operator<<(std::ostream &os, const MyChar &ch){
	std::cout<<"My Char "<<std::endl;
		return os;
}







