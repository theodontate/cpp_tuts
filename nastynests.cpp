#include <iostream>

struct X {
	private:
		int x;
	public:
		void show ( );
		struct Y;
		friend Y;
		struct Y {
			private:
				int i;
			public:
				void init ( );
				void doIt ( X* a, int b );

		}* y1;
};

void X::show () {
	x = 10;
	std::cout << x << std::endl;
}

void X::Y::init () {
	i = 24;
}

void X::Y::doIt ( X* a, int b ) {
	//std::cout << i << std::endl;
	std::cout << "inside doIt : " << std::endl;
	a->x = b;
	std::cout << a->x << std::endl;
}

int main (int argc, char** argv) {
	X* x1 = new X;
	x1->show();
	x1->y1->init();
	x1->y1->doIt(x1, 14);


}

