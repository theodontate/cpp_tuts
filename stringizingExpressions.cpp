#include <iostream>
#include <cstdlib>

#define P(A) std::cout << #A << " : " << (A) << std::endl;

int main (int argc, char** argv) {
	int a = 1, b = 2, c = 3;
	P(a); P(b); P(c);
	P(a+b);
	P((c-b)/a);

	return 0;

}
