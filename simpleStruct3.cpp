#include <iostream>

typedef struct Structure3 {
	char c;
	int i;
	float f;
	double d;
} Structure3;



int main() {
	Structure3 s1;
	s1.c = 'a';
	s1.i = 10;
	s1.f = 12.98;
	s1.d = 345.1238;

	Structure3 *s2 = &s1;
	std::cout << s2 -> c << std::endl;
	std::cout << s2 -> i << std::endl;
	std::cout << s2 -> f << std::endl;
	std::cout << s2 -> d << std::endl;

	return 0;

}
