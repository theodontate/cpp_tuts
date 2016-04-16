#include <iostream>
#include <string>

void func1(int a[], int size) {
	for (int i = 0; i < size; i++) {
		a[i] = i * i - i;
	}
}

void func2(int a[], int size) {
	for (int i = 0; i < size; i++) {
		a[i] = i * i + i;
	}
}

void print(int* a, std::string name, int size) {
	for (int i = 0; i < size; i++) {
		std::cout << name << "[" << i << "] = " << a[i] << std::endl;
	}
}

int main() {
	int b[5], a[5];

	print(a, "a", 5);
	print(b, "b", 5);

	func1(a, 5);
	func1(b, 5);
	print(a, "a", 5);
	print(b, "b", 5);

	func2(a, 5);
	func2(b, 5);
	print(a, "a", 5);
	print(b, "b", 5);

	return 0;


}

