//ArrayArguments.cpp
#include <iostream>
#include <string>
using namespace std;

void func1(int a[], int size) {
	for (int i = 0; i < size; i++) {
		a[i] = i * i - 1;
	}
}

void func2(int* a, int size) {
	for (int i = 0; i < size; i++) {
		a[i] = i * i + 1;
	}
}

void print(int a[], string name, int size) {
	for (int i = 0; i < size; i++) {
		cout << name << "[" << i << "] = "
			<< a[i] << endl;
	}
}

int main() {
	int a[10], b[10];
	int* ia = a;
	int* ib = b;
	cout << "Garbage values " << endl;
	print(a, "a", 5);
	print(b, "b", 5);
	//Initialize the arrays
	cout << "Initialized values " << endl;
	func1(a, 5);
	func2(b, 5);
	print(a, "a", 5);
	print(b, "b", 5);
	//Notice the arrays are always modified
	func2(ia, 5);
	func2(ib, 5);
	cout << "Initialized values " << endl;
	print(ia, "a", 5);
	print(ib, "b", 5);
	return 0;
}

