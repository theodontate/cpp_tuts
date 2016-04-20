#include "intStack.h"
#include <iostream>

int main (int argc, char** argv) {

	Stack s1;
	int value;
	int* result;
	s1.init();
	while (std::cin >> value) {
		if ((value >= 0) && (value < 100))
			s1.push(value);
		else break;
	}
	while ((s1.head != 0) && ((result = s1.pop()) != 0)) {
		std::cout << *result << std::endl;
	}
	return 0;
}
