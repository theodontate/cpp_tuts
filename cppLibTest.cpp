#include "CppLib.h"
#include <iostream>
#include <string>
#include <fstream>
#include <cassert>

int main (int argc, char** argv) {
	Stash intStash;
	intStash.initialize(sizeof(int));
	for (int i = 0; i < 100; i++) {
		intStash.add(&i);
	}

	for (int j = 0; j < intStash.count(); j++) {
		std::cout << "intStash.fetch(" 	<< j << " ) = " << *(int*)intStash.fetch(j) << std::endl;
	}

	Stash stringStash;
	const int bufsize = 80;
	stringStash.initialize(sizeof(char) * bufsize);
	std::ifstream in("cppLibTest.cpp");
	assert(in);
	std::string line;
	while (getline(in, line)) {
		stringStash.add(line.c_str());
	}
	int k = 0;
	char* cp;
	while ((cp = (char*)stringStash.fetch(k++)) != 0) {
		std::cout << "stringStash.fetch(" << k << ") = " << cp << std::endl;
	}
	intStash.cleanup();
	stringStash.cleanup();

}

