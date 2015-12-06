# include <iostream>
# include <fstream>
# include <cmath>
# include "MyChar.hpp"
# include "MyPair.hpp"

using namespace std;
const int ASCII_NUM = 256;

int main(int argc, char **argv) {
	MyChar m;
	ifstream rFile; // File stream object for read only
	ofstream wFile; // File stream object for write only

	MyPair A[ASCII_NUM] = { };

	char prevCh, curCh;

	if (argc != 3) {
		cerr << argv[0] << ": requires <exe file> <input file> <output file>"
				<< endl;
		return 1;
	}
	rFile.exceptions(ifstream::failbit | ifstream::badbit);
	try {
		rFile.open(argv[1], iostream::in);
		if (!rFile.eof()) {
			rFile.get(prevCh);
		}
		while (rFile.get(curCh)) {
			A[(int) prevCh]++; // first character of pair appears in file (for printing usage)

			A[(int) prevCh][(int) curCh]++;
			cout << prevCh << (int) prevCh << curCh << (int) curCh << endl;
			prevCh = curCh;
		}
	} catch (ifstream::failure & e) {
		if (!rFile.eof()) {  // either badbit or failbit are set
			cout << e.what() << endl;
			throw;
		}
	}

	try {
		wFile.open(argv[2], ios::out);
	}

	catch (ifstream::failure & e) {
		cout << e.what() << endl;
		throw;
	}
	wFile << "Total Number of occurrences::" << MyChar::total << endl;
	for (int i = 0; i < ASCII_NUM; i++) {
		if (A[i].occurrence) {
			//wFile << "[" << (char)i << "]::" << A[i];
			cout << "[" << (char) i << "]::" << A[i];
		}
	}

	cout << "Entropy is" << computeEntropy(A);
// Close the files

	rFile.close();
	wFile.close();

	return 0;
}

