#include <iostream>
#include <string>
using namespace std;


int main() {
	int a = 1;
	char c = 'A';
	double d = 1.2345;
	float f = 1.4;
	void* p;
	cout << "welcome" << endl;
	p = &a; 
	cout << *((int*)p) << endl;
	p = &c;
	cout << *((char*)p) << endl;
	p = &d;
	cout << *((double*)p) << endl;
	p = &f;
	cout << *((float*)p) << endl;

	return 0;
}

