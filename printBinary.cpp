#include <iostream>
#include "printBinary.h"

void printOnesComplement ( int num );

int main(int argc, char* argv[]) {
	int num;
	std::cout << "Enter a number : ";
	std::cin >> num;
	printBinary(num);
	std::cout << std::endl;
	printOnesComplement(num);
	return 0;
}

void printBinary (int num) {
	int mask = 1;
	for (int i = 3; i >= 0; i--) {
		std::cout << i << "th bit " << std::endl;
		std::cout << "mask << i : " << (mask << i) << std::endl;
		std::cout << "result : " << (num & (mask << i)) << std::endl;
		if (num & (mask << i)) {
			std::cout << "1" << std::endl;
		} else {
			std::cout << "0" << std::endl;
		}
		std::cout << "--------------------------";
	}
}

void printOnesComplement (int num) {
	std::cout << ~num << std::endl;
}
