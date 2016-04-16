#include <iostream>
#include <cstdlib>

#define P(EX) std::cout << #EX << " : " << EX << std::endl;

int main (int argc, char** argv) {
	int a[10];
	for (int i = 0; i < 10; i++) {
		a[i] = i;
	}
	int *ip = a;
	P(*ip);
	P(*++ip);
	P(*(ip + 5));
	int* ip2 = ip + 5;
	P(*ip2);
	P(*(ip2 - 4));
	P(*--ip2);
	P(ip2 - ip);


}
