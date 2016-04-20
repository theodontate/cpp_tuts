#include <iostream>

struct X {
	private:
		int a;
		char c;
	public:
		void showIt ( );
		struct Y {
			private:
				//int b;
			public:
				void doSomething ( );
		} y1;
};

void X::Y::doSomething () {
	//std::cout << b;
}

int main (int argc, char** argv) {
	X x1;
	x1.y1.doSomething();
	std::cout << sizeof(x1.y1);

}
