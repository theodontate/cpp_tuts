#include <iostream>
#include "recursion.hpp"

int main() {
	int num, result;
	std::cout << "Enter a number : ";
	std::cin >> num;
	result = fact(num);
	std::cout << "Result : " << result << std::endl;
	return 0;
}

int fact (int number) {

	if (number > 0)
	{
		return number * fact(number - 1);
	}

	else return 1;
}



