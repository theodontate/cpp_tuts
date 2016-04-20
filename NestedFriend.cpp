#include <iostream>
#include <cstring>

const int sz = 50;

struct Holder {
	private:
		int a[sz];
	public:
		void initialize ( );
		struct Pointer; //incomplete type spec
		friend Pointer;
		struct Pointer {
			private:
				Holder* h;
				int* p;
			public:
				void init ( Holder* h );
				void next ( );
				void previous ( );
				void top ( );
				void end ( );

				int read ( );
				void set ( int i );
		};

};

void Holder::initialize () {
	memset(a, 0, sz * sizeof(int));
}

void Holder::Pointer::init (Holder* rv) {
	h = rv;
	p = rv->a;
}

void Holder::Pointer::next () {
	if (p > &(h->a[0])) p++;
}

void Holder::Pointer::previous () {
	if (p > &(h->a[0])) p--;
}

void Holder::Pointer::top () {
	p = &(h->a[0]);
}

void Holder::Pointer::end () {
	p = &(h->a[sz -1]);
}

int Holder::Pointer::read () {
	return *p;
}

void Holder::Pointer::set (int i) {
	*p = i;
}

int main (int argc, char** argv) {
	Holder h;
	Holder::Pointer hp, hp2;
	int i;

	h.initialize();
	hp.init(&h);
	hp2.init(&h);
	for (i = 0; i < sz; i++) {
		hp.set(i);
		hp.next();
	}
	hp.top();
	hp2.top();
	for (i = 0; i < sz; i++) {
		std::cout << "hp = " << hp.read()
			<< ", hp = " << hp2.read()
			<< std::endl;
		hp.next();
		hp2.previous();
	}
}
