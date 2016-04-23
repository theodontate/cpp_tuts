#include <iostream>
#include <string>
using namespace std;

int main() {
	int number;
	
	cout << "Enter the number ";
	cin >> number;

	for (int i = 0; i < 8; i++) {
		if (number & (i << 1)) {
			cout << 1 << endl;
		} else {
			cout << 0 << endl;
		}
		cout << "iterate" << endl;
	}
	//for (int i = 0; i < 10; i++) {
	//	cout << (i << a) << endl;
	//}
	return 0;
}
