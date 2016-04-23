#include <iostream>

int* allocateAndStore ( int val );

int sz;

int main (int argc, char** argv) {
	int val;
	val = 0;
	sz = 0;
	int* storage;

	while ((std::cin >> val) && (val != 42)) {
		sz++;
		storage = allocateAndStore(val);
	}

	for (int i = 0; i < sz; i++) {
		std::cout << storage[i] << std::endl;
	}

}

int* allocateAndStore (int val) {
	static bool isAllocatedEver = false;
	static int* array  = 0;
	if (!isAllocatedEver) {
		array = new int[sz];
		array[sz - 1] = val;
		isAllocatedEver = true;
		return array;
	} else {
		int b[sz-1];
		for (int i = 0; i < (sz - 1); i++) {
			b[i] = array[i];
		}
		delete [] array;
		array = new int[sz];
		for (int i = 0; i < (sz - 1); i++) {
			array[i] = b[i];
		}
		array[sz - 1] = val;
		return array;
	}
}
