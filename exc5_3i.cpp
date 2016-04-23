#include "exc5_3.h"
#include <iostream>

void lemon::init () {
	j = 12;
}

void doSomething (lemon l) {
	std::cout << "current value of j : " << l.j << std::endl;
	l.j = 43;
	std::cout << "new value of j : " << l.j << std::endl;

}
