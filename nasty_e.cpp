#include <iostream>

struct X {
	int i;
	void show ( );
}x1;

void X::show () {
	std::cout << i << std::endl;
}

int main (int argc, char** argv) {
	x1 = *(new X);
	x1.i = 10;
	std::cout << x1.i << std::endl;
}
