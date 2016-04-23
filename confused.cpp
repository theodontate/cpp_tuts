#include <iostream>
using namespace std;

typedef struct selfReferential {
	int i;
	selfReferential* sr;
}selfie;

int main() {
	selfie s1, s2;
	s1.sr = &s2;
	s2.sr = &s1;
	s1.i = 47;
	s2.i = 10;
	cout << s1.i << endl;
	cout << s1.i << endl;
	return 0;
}
