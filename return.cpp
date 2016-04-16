#include<iostream>
using namespace std;

void showIt (char c, int a) {
	if (a > 0) {
		cout << c << endl;
		showIt(c + 1, a - 1);
	}
	else cout << "This is the beginning" << endl;
}

int main(int argc, const char * argv[]) {
	showIt('A',10);
	cout << "ZOOM" << endl;
	return 0;
}

