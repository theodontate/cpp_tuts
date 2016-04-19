#include "cppFloatStash.h"
#include <iostream>

int main (int argc, char** argv) {
	FloatStash s1;
	float result = 0;
	s1.init();
	for (float i = 1007; i < 1023; i++) {
		s1.push(i);
	}

	while ((result = s1.pop()) != 0) {
		std::cout << "result : " << result << std::endl;
	}

	s1.cleanup();
	return 0;
}
