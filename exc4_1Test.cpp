#include "exc4_1.h"
#include <iostream>

int main (int argc, char** argv) {
	K k1;
	k1.f();
	K* kp = &k1;
	kp->f();

	return 0;
}
