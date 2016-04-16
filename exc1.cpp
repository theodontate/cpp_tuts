#include <iostream>
#include "exc1.h"

int main (int argc, char** argv) {
	loveMe(2);
	int a = codeMe('a');
	float b = addMe(a);
	double c = multiMe(b);
	short d = kickMe(1);

	std::cout << a << b << c << d << std::endl;

	return 0;
}

void loveMe (int a) {
	std::cout << "love me " << a << " times." << std::endl;
}

int codeMe (char c) {
	if (c == 'a')
		return 1;
	else return 2;
}

float addMe (int a) {
	if (a > 0)
		std::cout << "the number is greater than zero" << std::endl;
	return a + 12.2;
}

double multiMe (double a) {
	return a*a*a;
}

short kickMe (int a) {
	return a;
}


