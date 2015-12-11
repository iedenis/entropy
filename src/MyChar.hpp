#ifndef MYCHAR_HPP_
#define MYCHAR_HPP_
#include <string>
#include <iostream>
class MyChar {
private:

public:
	int occurrences=0;
	static int total;
	static double entropy;

	MyChar& operator++(int);
	friend std::ostream& operator<<(std::ostream &os, const MyChar &ch);

};

#endif /* MYCHAR_HPP_ */
