#include "StackInt.h"
#include <iostream>

int main (int argc, char** argv) {
	{
		StackInt a1;
		for (int i = 0; i < 10; i++) {
			a1.push(i);
		}
		for (int i = 0; i < 10; i++) {
			std::cout << a1.pop() << std::endl;
		}
	}

	return 0;

}
