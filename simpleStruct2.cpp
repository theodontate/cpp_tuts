#include <iostream>
#include <string>
using namespace std;

typedef struct {
	char c;
	int a; 
	float b;
	double d;
} Structure2;

int main() {
	Structure2 s1;
	s1.c = 'A';
	s1.a = 12;
	s1.b = 12.0f;
	s1.d = 24.05d;

	cout << s1.c << s1.a << s1.b << s1.d << endl;
	return 0;
}

