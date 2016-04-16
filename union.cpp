#include <iostream>

union Packed {
	char i;
	int j;
	short k;
	long l;
	float f;
	double d;
};

int main() {
	Packed x;
	std::cout << sizeof(Packed) << std::endl;
	std::cout << "Address of Packed : " << &x << std::endl;
	x.i = 12;
	std::cout << sizeof(Packed) << std::endl;
	std::cout << "value of x.i" << x.i << std::endl;


	return 0;
}
