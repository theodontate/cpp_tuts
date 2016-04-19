#include <iostream>

struct B {
	private:
		char j;
		float f;
	public:
		int i;
		void func ( );
};

void B::func () {
	i = 0;
	j = '0';
	f = 0.0;
}

int main (int argc, char** argv) {
	B b;
	b.i = 10;
	//b.j = 'a';
	b.func();
	std::cout << b.i << std::endl;

	return 0;
}
