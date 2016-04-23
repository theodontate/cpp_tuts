//PointerIncrement.cpp
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[]) {
	int i [10];
	double d[10];
	int* ip = i;
	double* dp = d;
	for (int i = 0; i < 10; i++) {
		ip[i] = i;
		dp[i] = i;
	}
	cout << "ip = " << (long) ip << endl;
	ip += 2;
	cout << "ip = " << (long) ip << endl;
	cout << "*ip = " << *ip << endl;
	cout << "dp = " << (long) dp << endl;
	dp += 2;
	cout << "dp = " << (long) dp << endl;
	cout << "*dp = " << *dp << endl;
	return 0;
}




