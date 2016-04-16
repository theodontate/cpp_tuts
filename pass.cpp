#include <iostream>

void f(int &r) {
	std::cout << "&r = " << &r << std::endl;
	std::cout << "r = " << r << std::endl;
}

void g(int *g) {
	std::cout << "*g = " << *g << std::endl;
	std::cout << "g = " << g << std::endl;
}

int main() {
	int a;
	a = 10;
	std::cout << "a = " << a << std::endl;
	std::cout << "&a = " << &a << std::endl;
	f(a); //pass by reference (syntactic sugar)
	g(&a); //pass by value
	return 0;

}
