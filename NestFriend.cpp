#include <iostream>
#include <cstring>
const int sz = 50;

struct Holder {
	private:
		int a[sz];
	public:
		void initialize ( );
		struct Pointer;
		friend Pointer;
		struct Pointer {
			private:
				Holder* h;
				int* p;
			public:
				void initialize ( Holder* h );
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

void Holder::Pointer::initialize (Holder* rv) {
	h = rv;
	p = rv->a;
}

void Holder::Pointer::next () {
	if (p < &(h->a[sz - 1])) p++;
}

void Holder::Pointer::previous () {
	if (p > &(h->a[0])) p--;
}

void Holder::Pointer::top () {
	p = &(h->a[0]);
}

void Holder::Pointer::end () {
	p = &(h->a[sz - 1]);
}

int Holder::Pointer::read () {
	return *p;
}

void Holder::Pointer::set (int i) {
	*p = i;
}

int main (int agrc, char** argv) {
	Holder h;
	Holder::Pointer hp, hp2;
	int i;

	h.initialize();
	hp.initialize(&h);
	for (int i = 0; i < sz; i++)

}


