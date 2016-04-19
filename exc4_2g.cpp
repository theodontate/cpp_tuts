#include "exc4_2g.h"
#include <iostream>

void init (I* b, int av) {
	b->a = av;
}

void show (I* b) {
	std::cout << b->a << std::endl;
}

void cleanup (I* b) {
	delete b;
}
