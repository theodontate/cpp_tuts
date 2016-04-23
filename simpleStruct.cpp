#include <iostream>
#include <string>
using namespace std;

struct Structure {
	char c;
	int i;
	float f;
	double d;
};

int main() {
	struct Structure s1, s2;
	s1.c = 'A';
	s1.i = 132;
	s1.f = 12.124f;
	s1.d = 45.0d;

	s2.c = 'C';
	s2.i = 131;
	s2.f = 12.32f;
	s2.d = 23.8d;

	cout << s1.c;
	cout << s2.d;
	return 0;
}

