#include <iostream>

class X {
	private:
		int x;
	public:
		class Y;
		friend class Y;
		class Y {
			private:
				int i = 10;
			public:
				void doSomething ( X* x1 );
		};
};

void X::Y::doSomething (X* x1) {
	x1->x = 10;
	std::cout << i << std::endl;
	std::cout << x1->x  << std::endl;
}

int main (int argc, char** argv) {
	X x1;
	X::Y y1;
	y1.doSomething(&x1);

	return 0;
}

