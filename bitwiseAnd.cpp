#include <iostream>
#include <string>
using namespace std;

int main() {
	//unsigned long int a = 0;
	unsigned long c;
	
	cout << "enter a number" << endl;
	cin >> c;
	cout << "\nAnswer with 0 : " << (c & 1);
	cout << "\nAnswer with 1 : " << (c & (1 << 1));
	cout << "\nAnswer with 2 : " << (c & (2 << 1));
	cout << "\nAnswer with 3 : " << (c | (3 << 1));
	cout << "\nAnswer with 4 : " << (c & (4 << 1));
	//for (i = 7; i >= 0; i--) {
	//if (a & (i << 1))
	//	cout << 1 ;
	//else
	//	cout << 0 ;
	//}
	return 0;
}

