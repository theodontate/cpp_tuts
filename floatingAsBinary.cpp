#include <iostream>
#include "printBinary.h"
#include <cstdlib>

int main (int argc, char** argv) {
	if (argc != 2) {
		std::cout << " Must provide a number " << std::endl;
		exit(1);
	}

	double d = atof(argv[1]);
	std::cout << "value : " << d << std::endl;
	unsigned char* cp = reinterpret_cast<unsigned char*> (&d);
	for (int i = sizeof(double); i > 0; i -=2) {
		std::cout << "cp[i-1] " << cp[i-1] << std::endl;
		printBinary(cp[i-1]);
		std::cout << "cp[i] " << cp[i] << std::endl;
		printBinary(cp[i]);

	}

	return 0;

}
