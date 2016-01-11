#include <iostream>
#include <string>
using namespace std;

typedef struct Structure3 {
	char c;
	int a;
} Structure3;

int main() {
	Structure3 s1, s2;
	Structure3* sp = &s1;
	sp->c = 'a';
	sp->a = 1;
	cout << s1.c << endl;
	cout << s2.a << endl;
	cout << s1.a << endl;
	return 0;
}
