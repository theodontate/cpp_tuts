#include <iostream>

#define DF(N) void N() { \
	std::cout << "function " #N " called..." << std::endl; \
}

DF(a); DF(b); DF(c); DF(d); DF(e); DF(f); DF(g);

void (*func_table[])() = {a, b, c, d, e, f, g};

int main (int argc, char** argv) {
	while (1) {
		std::cout << "press a key from a to g "
			"or q to quit" << std::endl;
		char c, cr;
		std::cin.get(c);
		std::cin.get(cr);
		if (c == 'q') {
			break;
		}
		if (c < 'a' || c > 'g') {
			continue;
		}
		(*func_table[c - 'a'])();
	}
}


