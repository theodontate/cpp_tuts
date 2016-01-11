#include "printBinary.h"
#include <iostream>
using namespace std;

#define PR(STR, EXPR) \
	cout << STR; printBinary(EXPR); cout << endl;


int main() {
	unsigned int getVal1, getVal2;
	unsigned char a, b;
	cout << "Enter a value between 0 and 255" << endl;
	cin >> getVal1;
	a = getVal1;
	PR("a in binary : ", getVal1);
	cout << "Enter a value between 0 and 255" << endl;
	cin >> getVal2;
	b = getVal2;
	PR("b in binary : ", getVal2);
	PR("a & b ", a&b);
	PR("a | b ", a|b);
	PR("~a : ", ~a);
	PR("~b : ", ~b);
	//An interesting bit pattern
	unsigned char c = 73;
	cout << c << endl;
	PR("c in binary ", c);
	PR("a <<= c ", a <<= c);
	PR("a >>= c ", a >>= c);
	PR("a &= c ", a &= c);
	PR("a ^= c ", a ^= c);
	return 0;
}


