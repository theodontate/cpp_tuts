#include <iostream>

void f (int *a) {
	std::cout << "*a : " << *a << std::endl;
	*a = 5;
	std::cout << "*a : " << *a << std::endl;
}

int main() {
	int x = 47;
	std::cout << "x = " << x << std::endl;
	f(&x);
	std::cout << "x = " << x << std::endl;
}
