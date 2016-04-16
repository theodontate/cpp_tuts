#include <iostream>
#include <string>

void func () {
	std::cout << "func called..." << std::endl;
}

int main (int argc, char** argv) {
	void (*fp)();
	fp = func;
	(*fp)();
	void (*fp2)() = func;
	(*fp2)();


	return 0;



}
