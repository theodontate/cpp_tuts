#include <iostream>
#include "exc6.h"

int main (int argc, char** argv) {
	Colors color;

	color = blue;

	switch (color) {
		case violet:
			std::cout << "1" << std::endl;
			break;
		case blue  :
			std::cout << "2" << std::endl;
			break;
		case red  :
			std::cout << "3" << std::endl;
			break;
		case green  :
			std::cout << "4" << std::endl;
			break;
		case yellow  :
			std::cout << "5" << std::endl;
			break;
		case pink  :
			std::cout << "6" << std::endl;
			break;
		case orange  :
			std::cout << "7" << std::endl;
			break;
	}

	return 0;


}
