#include "Handle.h"
#include "require.h"

struct Handle::Cheshire {
	int i;
};

void Handle::initialize () {
	smile = new Cheshire();
	smile->i = 0;
}

void Handle::cleanup () {
	delete smile;

}

int Handle::read () {
	return smile->i;
}

void Handle::change (int a) {
	smile->i = a;
}
