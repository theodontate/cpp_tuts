#include <iostream>
struct B; // incomplete type specification

struct C {
	public:
		void eatIt (B* a);
};

struct B {
	private:
		int x;
	public:
		void init ( int c );
		friend void g ( B x, int a );
		friend void C::eatIt ( B* a );
		friend struct Z; // incomplete type specification

};

void B::init (int c) {
	x = c;
}

void g (B x, int a) {
	std::cout << x.x << std::endl;
}

void C::eatIt (B* a) {
	std::cout << a->x << std::endl;
}

struct Z {
	private:
		int k;
	public:
		void lol ( B b );
};

void Z::lol ( B b ) {
	std::cout << b.x << std::endl;
	std::cout << k << std::endl;
}
