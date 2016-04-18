#include "exc4_2.h"
#include <cstdlib>
#include <iostream>

int main (int argc, char** argv) {
	if(argc < 2) {
		std::cout << "Wrong Usage";
	} else {
		A* ap  = new A;
		ap->setA(atoi(argv[1]));
		ap->showA();
		delete ap;
	}

	return 0;
}
