#include <iostream>

struct A {
	struct B {
		int a;
		void init ( int c );
		void show ();
	}*b1, *b2;

	int b;
	void init ( int c );
	void showIt ( );
};

void A::B::init (int c) {
	a = c;
}

void A::B::show () {
	std::cout << a << std::endl;
}

void A::init ( int c ) {
	b = c;
}

void A::showIt () {
	std::cout << b << std::endl;
}

int main (int argc, char** argv) {
	A a1;
	a1.init(5);
	a1.showIt();
	a1.b1->init(20);
	a1.b1->show();
	a1.b2->init(23);
	a1.b2->show();


	return 0;
}


