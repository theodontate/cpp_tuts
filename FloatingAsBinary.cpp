//FloatingAsBinary.cpp
#include "printBinary.h"
#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[]) {
	if (argc != 2) {
		cout << "Must provide a number" << endl;
		exit(1);
	}
	double d = atof(argv[1]);
	cout << "size of d : " << sizeof(d) << endl;
	cout << "d : " << d << endl;
	unsigned char* cp =
		reinterpret_cast<unsigned char*>(&d);
	for (int i = sizeof(double); i > 0; i--) {
		cout << i << "th byte : ";
		printBinary(cp[i]);
		cout << endl;
	}
	return 0;
}
