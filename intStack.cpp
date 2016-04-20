#include "intStack.h"

void Stack::node::init (int val, node* nxt) {
	value = val;
	next = nxt;
}

void Stack::init () {
	head = 0;
}

int* Stack::pop () {
	if (head == 0) {
		return 0;
	 } else {
		node* oldHead = head;
		int* result = &head->value;
		head = head->next;
		delete oldHead;
		return result;
	}
}

void Stack::push (int val) {
	if (head == 0) {
		head = new node;
		head->init(val, 0);
	} else {
		node* oldHead = head;
		head = new node;
		head->init(val, oldHead);
	}

}

