#include "hStack.h"
#include "exc5_6.h"
#include <iostream>
#include <cassert>

int main (int argc, char** argv) {
	hStack h1;
	hStack h2;
	hStack h3;
	for (int i = 0; i < 5; i++) {
		Hen* pinky = new Hen(i);
		Hen::Nest* nestle = new Hen::Nest(i);
		Hen::Nest::Egg* egg = new Hen::Nest::Egg(i);
		h1.push(pinky);
		h2.push(nestle);
		h3.push(egg);
	}

	for (int i = 0; i < 5; i++) {
		Hen* temp = (Hen*) h1.pop();
		temp->display();
		Hen::Nest* nesttemp = (Hen::Nest*) h2.pop();
		nesttemp->display();
		Hen::Nest::Egg* eggtemp = (Hen::Nest::Egg*) h3.pop();
		eggtemp->display();
	}

	return 0;
}
