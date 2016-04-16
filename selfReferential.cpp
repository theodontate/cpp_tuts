#include <iostream>

typedef struct selfReferential {
	int i;
	selfReferential* sr;
} selfReferential;

int main() {
	selfReferential sr1, sr2;
	sr1.sr = &sr2;
	sr2.sr = &sr1;
	sr1.i = 47;
	sr2.i = 1024;
	std::cout << sr1.sr -> i << std::endl;
	std::cout << sr2.sr -> i << std::endl;

	return 0;
}


