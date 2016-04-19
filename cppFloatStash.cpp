#include "cppFloatStash.h"
#include <cassert>
#include <iostream>

void FloatStash::init () {
	head = 0;
}

void FloatStash::push (float a) {
	if (head == 0) {
		head = new node;
		head->value = a;
		head->next = 0;
	} else {
		node* newNode = new node;
		newNode->value = a;
		newNode->next = head;
		head = newNode;
	}
}

float FloatStash::pop () {
	if (head == 0)
		return 0;
	else {
			node* oldHead = head;
			float result = head->value;
			head = head->next;
			delete oldHead;
			return result;
	}
}

float* FloatStash::peek () {
	if (head == 0) {
		return 0;
	}
	else {
		float* result = &head->value;
		return result;
	}

}

void FloatStash::cleanup () {
	assert(head == 0);
	std::cout << "Stack empty... Have a good one" << std::endl;
}
