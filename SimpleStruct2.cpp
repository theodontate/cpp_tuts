#include <iostream>

typedef struct {
	char c;
	int i;
	float f;
	double b;
} Structure2;

int main() {
	Structure2 s1;
	s1.c = 'a';
	s1.i = 10;
	s1.f = 12.34;
	s1.b = 12.4532;

	std::cout << s1.c << s1.i << s1.f << s1.b << std::endl;

	return 0;
}

