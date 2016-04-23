#include "exc5_6.h"
#include <iostream>

void Hen::display () {
	std::cout << i << " hens " <<  std::endl;
}

void Hen::Nest::display ( ) {
	std::cout << k << " nests " << std::endl;
}

void Hen::Nest::Egg::display () {
	std::cout << j << " eggs " << std::endl;
}

void Hen::displayNest (Nest a) {
	std::cout << a.k << std::endl;
}

void Hen::Nest::displayEgg (Egg e) {
	std::cout << e.j << std::endl;
}

Hen::Hen (int i) {
	this->i = i;
}

Hen::Nest::Nest (int k) {
	this->k = k;
}

Hen::Nest::Egg::Egg (int j) {
	this->j = j;
}

