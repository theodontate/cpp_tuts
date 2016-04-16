#include <iostream>
#include "exc3.h"

int main (int argc, char** argv) {
	int index;
	std::string word;
	while (std::cout << "enter a word " && std::cin >> word) {
		std::cin.clear();
		std::cin.ignore();

		if (word == "love") {
			index = 1;
		} else if (word == "sex") {
			index = 2;
		} else if (word == "hope") {
			index = 3;
		} else if (word == "code") {
			index = 4;
		} else index = 5;



		switch (index) {
			case 1 :
				std::cout << " I love you " << std::endl;
				break;
			case 2   :
				std::cout << "Sometimes I need sex"<< std::endl;
				break;
			case 3 :
				std::cout << "I always hope for the best" << std::endl;
				break;
			case 4 :
				std::cout << "I want to code it all and I will do it regardless of whatever it might be" << std::endl;
				break;
			case 5:
				std::cout << "bye bye" << std::endl;
				break;

		}

	}
}
