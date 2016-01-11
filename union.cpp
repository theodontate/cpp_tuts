#include <iostream>
#include <string>
using namespace std;

union Packed {
	char i;
	int j;
	short s;
	long k;
	float f;
	double d;
};

int main() {
	cout << "Size of union is " << sizeof(Packed) << endl;
	Packed x;
	x.f = 78.098;
	cout << x.j;
	return 0;
}

