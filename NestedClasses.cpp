#include <iostream>

struct A {
	private:
		int i;
	public:
		struct B {
			private:
				int k;

			public:
				void show ( );
				void init ( int b );
		}b2;

		int p;
		void init ( int a );
		void show ( );
};

void A::init (int a) {
	i = a;
	p = a + 1;
}

void A::show () {
	std::cout << i << std::endl;
	std::cout << p << std::endl;
}

void A::B::init (int b) {
	k = b;
	//i = b; Not allowed.
}

void A::B::show () {
	std::cout << k << std::endl;
}

int main (int argc, char** argv) {
	A a;
	a.init(10);
	a.show();
	a.b2.init(21);
	a.b2.show();

}
