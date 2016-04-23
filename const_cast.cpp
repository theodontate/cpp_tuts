#include <iostream>
using namespace std;

int main() {
	const int a = 10;
	volatile int b = 12;
	//old form
	int* j = (int*) (&a);
	//new form preferred
	j = const_cast<int*> (&a);
	int* c = const_cast<int*> (&b);
	b = 14;
	cout << *c << endl << *j << endl;


	return 0;
}
