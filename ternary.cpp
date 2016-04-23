//ternary.cpp
#include <iostream>
using namespace std;

int main() {
	int a;
	cout << "Enter the number";
	cin >> a;
	bool isPositive;
	isPositive = a > 0 ? true : false;
	if (isPositive) {
		cout << "is positive" << endl;
	} else { 
		cout << "is negative" << endl;
	}
	return 0;
}

