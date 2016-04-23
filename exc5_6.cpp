#include "exc5_6.h"
#include <iostream>

int main (int argc, char** argv) {
	Hen h1;
	Hen::Nest n1;
	h1.display();
	n1.display();
	return 0;
}

void Hen::display () {
	std::cout << i << std::endl;
}

void Hen::Nest::display () {
	std::cout << k << std::endl;
}



