#include <iostream>
#include "exc4.h"

int main (int argc, char** argv) {
	std::string word;
	std::cout << "Enter a word : ";
	std::cin >> word;
	changeP(&word);
	std::cout << word << std::endl;
	changeR(word);
	std::cout << word << std::endl;

	return 0;
}

void changeP (std::string* word) {
	std::cout << "the original word is " << *word << std::endl;
	*word += " is madness";

}

void changeR (std::string& word) {
	std::cout << "the original word : " << word << std::endl;
	word += " and a boon.";

}
