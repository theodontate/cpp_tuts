#ifndef id4C899
#define id4C899

void printBinary (int num) {

	int mask = 1;
	for (int i = 7; i >= 0; i--) {
		/* std::cout << i << "th bit " << std::endl;
		std::cout << "mask << i : " << (mask << i) << std::endl;
		std::cout << "result : " << (num & (mask << i)) << std::endl;
		*/
		if (num & (mask << i)) {
			std::cout << "1";
		} else {
			std::cout << "0";
		}
	}

	std::cout << std::endl;
}



#endif
