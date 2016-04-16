#include <iostream>
#include <cstdlib>

int main (int argc, char** argv) {
	int i[10];
	double d[10];
	int* ip = i;
	double* dp = d;
	std::cout << "ip = " << (long) ip << std::endl;
	ip++;
	std::cout << "ip = " << (long) ip << std::endl;
	std::cout << "dp = " << dp << std::endl;
	dp++;
	std::cout << "dp = " << dp << std::endl;

	return 0;
}
