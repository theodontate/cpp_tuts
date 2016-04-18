#include "Stack2.h"
#include "require.h"
#include <iostream>
#include <string>
#include <fstream>


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
	std::cout << "Popping data : " << std::endl;
	while ((s = (std::string*)textlines.reversePop()) != 0) {
		std::cout << *s << std::endl;
	}


	while ((s = (std::string*)textlines.pop()) != 0) {
		std::cout << *s << std::endl;
		delete s;
	}

	textlines.cleanup();

	return 0;
}
