#include <iostream>
#include <string>
using namespace std;

typedef struct {
	int i, j, k;
} Threepoint;

int main() {
	Threepoint D[10];
	for (int i = 0; i < 10; i++) {
		D[i].i = i;
		D[i].j = i + 2;
		D[i].k = i + 5;
	}

	for (int i = 0; i < 10; i++) {
		cout << "D[" << i << "] addresss : " << (long) &D[i] << endl;
		cout << i << " th" << endl;
		cout << D[i].i << endl;
		cout << D[i].j << endl;
		cout << D[i].k << endl;
	}
	return 0;
}
