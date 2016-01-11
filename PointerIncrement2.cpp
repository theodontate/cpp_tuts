//PointerIncrement2.cpp
#include<iostream>
#include<string>
using namespace std;

typedef struct {
	char c; //1
	short s; //2
	int i; //4
	long l; //4
	float f; //4
	double d;//8
	long double ld;//8
} Primitives;

int main() {
	Primitives p[10];
	Primitives* ip = p;
	cout << "ip : " << (long) ip << endl;
	ip++;
	cout << "ip : " << (long) ip << endl;
	return 0;
}

