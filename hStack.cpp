#include "hStack.h"
#include <iostream>
#include <cassert>

hStack::hNode::hNode (void* element, hNode* next) {
	this->element = element;
	this->next = next;
}

hStack::hStack () {
	head = 0;
}

void hStack::push (void* element) {
	head = new hNode(element, head);
}

void* hStack::pop () {
	assert(head != 0);
	hNode* oldHead;
	void* result;
	oldHead = head;
	head = head->getNext();
	result = oldHead->getElement();
	delete oldHead;
	return result;
}

void* hStack::peek () {
	assert(head != 0);
	void* result;
	result = head->getElement();
	return result;
}

void* hStack::hNode::getElement () {
	return element;
}

hStack::hNode* hStack::hNode::getNext () {
	return next;
}


