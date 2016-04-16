#include <iostream>
#include <cstdlib>

typedef struct {
	char c;
	short s;
	int k;
	long l;
	float f;
	double d;
	long double m;
} Primitives;

int main (int argc, char** argv) {
	Primitives p[10];
	Primitives* pp = p;
	std::cout << "sizeof(Primitives) : " << sizeof(Primitives) << std::endl;

	std::cout << "pp : " << pp++;
	std::cout << "pp : " << pp;
	return 0;
}
