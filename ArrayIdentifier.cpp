#include <iostream>

int main() {
	int a[10];
	std::cout << a << std::endl;
	std::cout << &a[0] << std::endl;
	int *ap = a;
	for (int i = 0; i < 10; i++) {
		*ap = i;
	}

	for (int i = 0; i < 10; i++) {
		std::cout << i << std::endl;
	}

	return 0;
}
