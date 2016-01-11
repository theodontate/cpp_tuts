#include <iostream>
#include <string>
using namespace std;

int main() {
	int a[10];
	
	cout << "a : " << (long) a << endl; 
	cout << "address of a : " << (long) &a[0] << endl;
	return 0;
}
