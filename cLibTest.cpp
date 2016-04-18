//: C04:cLibTest.cpp
//{L} cLib
//Test the C-Like Library
#include <iostream>
#include <fstream>
#include "cLib.h"
#include <string>
#include <cassert>

int main (int argc, char** argv) {
	cStash intStash, stringStash;
	int i;
	char* cp;
	std::ifstream in;
	std::string line;
	int a;
	const int bufsize = 80;
	initialize(&intStash, sizeof(int));
	for (i = 0; i < 100; i++) {
		add(&intStash, &i);
	}
	for (i = 0; i < count(&intStash); i++) {
		std::cout << "fetch(&intStash, " << i << ") ="
			<< *(int*)fetch(&intStash, i)
			<< std::endl;
	}

	std::cout << " --------------------------------------------------------------------------------------" << std::endl;

	initialize(&stringStash, sizeof(char)* bufsize);
	in.open("CLibTest.cpp");
	assert(in);
	while (getline(in, line))
		add(&stringStash, line.c_str());
	i = 0;
	while ((cp = (char*)fetch(&stringStash, i++)) != 0) {
		std::cout << "fetch(&stringStash, " << i << ") ="
			<< cp << std::endl;
		std::cout << "*cp : " << *cp << std::endl;
	}
	cleanup(&intStash);
	cleanup(&stringStash);
}
