#include "StackInt.h"
#include <iostream>
#include <cassert>

StackInt::StackInt () {
}

int StackInt::pop () {
	static int i = 0;
	assert(ints.size() != 0);
	return ints[ints.size() - (i++ + 1)];
}

void StackInt::push (int a) {
	ints.push_back(a);
}

int StackInt::peek () {
	assert(ints.size() != 0);
	return ints[ints.size() - 1];

}

StackInt::~StackInt() {
	std::cout << "There isn't much to clean." << std::endl;
}
