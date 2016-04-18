#include "Stack.h"
#include "require.h"
#include <iostream>
#include <fstream>
#include <string>

int main (int argc, char** argv) {
	requireArgs(argc, 1);
	std::ifstream in(argv[1]);
	assure(in, argv[1]);
	Stack textlines;
	textlines.initialize();
	std::string line;
	std::cout << "Pushing data : " << std::endl;
	while (getline(in, line)) {
		std::cout << line << std::endl;
		textlines.push(new std::string(line));
	}

	std::string* s;
	int i  = 0;
	std::cout << "Poping data : " << std::endl;
	while ((s = (std::string*)textlines.pop()) != 0) {
		std::cout << i++ << std::endl;
		std::cout << "-------------------";
		std::cout << *s << std::endl;
		delete s;
	}
	textlines.cleanup();

	return 0;
}
