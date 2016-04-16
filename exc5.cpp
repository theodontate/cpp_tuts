#include <iostream>
#include "exc5.h"

int main (int argc, char** argv) {
	struct Lines l1, l2, l3;
	l1.word1 = "love";
	l2.word1 = "life";
	l3.word1 = "happiness";
	l1.word2 = "a gal";
	l2.word2 = "mate";
	l3.word2 = "game developer";

	l1.value = 10;
	l2.value = 3;
	l3.value = 4;

	std::cout << l1.word1
		<< l2.word1 << std::endl
		<< l3.word1 << std::endl
		<< l1.word2 << std::endl
		<< l2.word2 << std::endl
		<< l3.word2 << std::endl
		<< l1.value << std::endl
		<< l2.value << std::endl
		<< l3.value << std::endl;

	struct Lines* lp = &l1;

	std::cout << lp -> word1 << std::endl
		<< lp -> word2 << std::endl
		<< lp -> value << std::endl;

	return 0;



}
