#include <iostream>

struct A {
	private:
		int i;
	public:
		void init ( int b );
		friend void coolBytes ( A a );

};

void A::init (int b) {
	i = b;
}

void coolBytes (A a) {
	std::cout << a.i << std::endl;
}

int main () {
	return 0;
}
