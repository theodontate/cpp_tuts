#include <iostream>

int main (int argc, char** argv) {
	int* k = new int;
	std::cout << *k << std::endl;
	delete k;
	return 0;
}

