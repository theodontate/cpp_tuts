//PointersAndBrackets.cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
	int a[10];
	int* ip = a;
	for (int i = 0; i < 10; i++) {
		a[i] = i;
	}
	for (int i = 0; i < 10; i++) {
		ip[i] = i * 10;
		cout << a[i] << endl;
	}
	return 0;
}
