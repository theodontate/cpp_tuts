#include "Rotation.h"
#include <iostream>
using namespace std;

int main() {
	int a;
	cout << "Enter the number" << endl;
	cin >> a; 
	a = rotateRight(a);
	cout << "After rotation right : " << a << endl;
	a = rotateLeft(a);
	cout << "After rotation left : " << a << endl;
	return 0;
}


