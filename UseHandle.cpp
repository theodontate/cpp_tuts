#include "Handle.h"

int main (int argc, char** argv) {
	Handle u;
	u.initialize();
	u.read();
	u.change(12);
	u.cleanup();

	return 0;
}
