#include <iostream>
#include <cstdlib>

int main (int argc, char* argv[]) {
	double d = atof(argv[1]);
	std::cout << "value : " << d << std::endl;
	unsigned char* cp = reinterpret_cast<unsigned char*> (&d);
	std::cout << "the value of d : " << *cp;
	return 0;
}

