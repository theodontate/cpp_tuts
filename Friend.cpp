struct X;

struct Y {
	void f(X*);
};

struct X {
	private:
		int i;
	public:
		void init ( );
		friend void g ( X*, int ); // Global friend
		friend void Y::f ( X* ); // Struct member friend
		friend struct Z; // Entire struct is friend
		friend void h ( );
};

void X::init () {
	i = 0;
}

void g (X* a, int b) {
	a->i = b;
}

void Y::f (X* a) {
	a->i = 12;
}

struct Z {
	private:
		int j;
	public:
		void init ( );
		void g ( X* x );
};

void Z::init () {
	j = 99;
}

void Z::g (X* x) {
	x->i = j;
}

void h () {
	X x;
	x.i = 100;
}

int main (int argc, char** argv) {
	X x;
	Z z;
	z.g(&x);
}
