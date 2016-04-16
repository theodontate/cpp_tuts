#include "cLib.h"
#include <iostream>
#include <cassert>

const int increment = 100;

void initialize (cStash* s, int sz) {
	s->size = sz;
	s->quantity = 0;
	s->storage = 0;
	s->next = 0;
}

int add (cStash* s, const void* element) {
	if (s->next >= s->quantity) {
		inflate(s, increment);
	}

	int startBytes = s->next * s->size;
	unsigned char* e = (unsigned char*) element;
	for (int i = 0; i < s->size; i++) {
		s->storage[startBytes + i] = e[i];
	}
	s->next++;
	return (s->next - 1); //Index number
}

void* fetch (cStash* s, int index) {
	assert(0 <= index);
	if (index >= s->next) {
		return 0;
	}
	return &(s->storage[index * s->size]);
}

int count (cStash* s) {
	return s->next;
}

void inflate (cStash* s, int increase) {
	assert(increase > 0);
	int newQuantity = s->quantity + increase;
	int newBytes = newQuantity * s->size;
	int oldBytes = s->quantity * s->size;
	unsigned char* b = new unsigned char[newBytes];
	for (int i = 0; i < oldBytes; i++) {
		b[i] = s->storage[i];
	}
	delete [](s->storage);
	s->storage = b;
	s->quantity = newQuantity;
}

void cleanup (cStash* s) {
	if (s->storage != 0) {
		std::cout << "freeing storage " << std::endl;
		delete []s->storage;
	}
}

