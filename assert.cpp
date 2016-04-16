//#define NDEBUG

#include <iostream>
#include <cassert>

int main (int argc, char** argv) {
	int i = 100;
	assert(i != 100); //Fails

	std::cout << i << std::endl;



	return 0;

}
