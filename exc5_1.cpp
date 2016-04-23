#include "exc5_1.h"
#include <iostream>
#include <string>

int main (int argc, char** argv) {
	awesome a;

	std::cout << a.i << std::endl;
	std::cout << a.j << std::endl;
	std::cout << a.k << std::endl;

	a.show();
	a.init();

	return 0;


}
