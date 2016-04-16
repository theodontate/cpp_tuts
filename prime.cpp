#include <iostream>
#include "prime.h"

int main (int argc, char** argv) {
	int num, limit;
	char response;
	num = limit = 0;
	std::cout << "Enter a number : ";
	std::cin >> num;
	if (isPrime(num)) {
		std::cout << num << " is prime." << std::endl;
	} else {
		std::cout << num << " is composite." << std::endl;
	}

	std::cout << "Do you want to check out the prime numbers between 0 and a number that you desire ? " << std::endl;
	//clearing the input stream
	std::cin.clear();
	std::cin.ignore();

	std::cin.get(response);
	if (response == 'y') {
		std::cout << "Enter the limit : ";
		std::cin >> limit;
		printPrime(limit);
	} else {
		std::cout <<"Thanks. Have a nice day." << std::endl;
	}

	return 0;
}

bool isPrime (int num) {
	int factorCount = 0;
	for (int i = 2; i < (num / 2); i++) {
		if (factorCount > 0)
			break;
		if ((num % i) == 0) {
			factorCount++;

		}
	}

	if (factorCount > 0)
		return false;
	else
		return true;
}

void printPrime (int limit) {
	int factorCount = 0;
	for (int i = 1; i < limit; i++) {
		factorCount = 0;
		for (int j = 2; j < (i / 2); j++) {
			if (factorCount > 0)
				break;
			if ((i % j) == 0) {
				factorCount++;
			}
		}
		if (factorCount > 0) {
			//std::cout << i << " is composite" << std::endl;
		} else {
			std::cout << i << " is prime" << std::endl;
		}
	}
}

