#include "Stack2.h"
#include "require.h"
#include <iostream>
#include <cassert>
#include <string>

void Stack::initialize ()  {
	head = 0;
}

void Stack::node::initialize (void* dat, node* prev) {
	data = dat;
	previous = prev;
}

void Stack::push (void* dat) {
	if (head == 0) {
		node* newNode = new node;
		newNode->initialize(dat, head);
		head = newNode;
	} else {
		node* newNode = new node;
		newNode->initialize(dat, head);
		head->next = newNode;
		head = newNode;
	}
}

void* Stack::peek () {
	require(head != 0, "Stack empty");
	return head->data;
}

void* Stack::peekBase () {
	while (head != 0) {
		if ((head = head->previous) == 0) {
			return head->data;
		}
	}
	return 0;
}

void* Stack::pop () {
	static bool isFirst = true;
	static node* index = head;
	if (isFirst){
		std::cout << "FILO mode : " << std::endl;
	}
	if (index == 0) return 0;
	void* result = index->data;
	//node* oldHead = index;
	index = index->previous;
	//delete oldHead;
	isFirst = false;
	return result;
}

void* Stack::reversePop () {
	static node* base = head;
	static bool isFirst = true;
	if (isFirst)
		std::cout << "FIFO mode : " << std::endl;
	if (base == 0) {
		return 0;
	}
	while (isFirst && base->previous != 0) {
		base = base->previous;
	}
	void* result = base->data;
	//node* oldHead = base;
	if (base->next != 0) {
		base = base->next;
		//delete oldHead;
		isFirst = false;
		return result;
	}
	isFirst = false;
	return 0;
}

void Stack::cleanup ( ) {
	while (true) {
		std::cout << "Cleaning";
		while (head->previous != 0) {
			node* oldhead = head;
			head = head->previous;
			delete oldhead;
			std::cout << ".";
		}
		if (head->previous == 0) {
			delete head;
		}
		head = 0;
		break;
	}
	std::cout << "\nThanks for trying out. Have a good one." << std::endl;
	require(head == 0, "Stack not empty");
}

