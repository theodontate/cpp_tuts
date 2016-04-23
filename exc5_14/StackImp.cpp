#include "StackInt.h"
#include <iostream>
#include <cassert>

StackInt::StackInt () {
	for (int i = 0; i < 20; i++) {
		a[i] = 0;
	}
}

int StackInt::pop () {
	static int index = 0;
	int result = a[index++];
	return result;
}


void StackInt::push ( int val ) {
	static int i = 0;
	assert(i <= 20);
	a[i++] = val;
}

int StackInt::peek () {
	return *a;
}

StackInt::~StackInt () {
	std::cout << "Cleaning the mess that you made in heap...";
	delete [] a;
}

