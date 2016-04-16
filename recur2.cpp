#include <iostream>
using namespace std;

void numberFunction (int a) {
	std::cout << " the number is : " << a << endl;
	if (a < 10)
	{
		numberFunction(a+1);
	}
}



int main() {
	std::cout << "Recursion : " << std::endl;
	numberFunction(1);
	return 0;
}

