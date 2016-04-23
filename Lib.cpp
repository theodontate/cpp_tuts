#include <iostream>
#include "Libc.h"

int main (int argc, char** argv) {
	Libc a;
	a.seta("code");
	a.setb("sleep");
	a.setc("repeat");

	std::cout << a.geta() << a.getb() << a.getc() << std::endl;

	return 0;
}
