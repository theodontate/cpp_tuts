#include <iostream>
#include <string>
using namespace std;

void f() {
	static i;
	cout << i++;
}

int main() {

	for (int i = 0; i < 10; i++) {
		f();
	}

	return 0;
}

