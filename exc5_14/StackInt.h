#ifndef id654
#define id654
#include <vector>

class StackInt {
	int* a = new int[20];
	std::vector<int> ints;

	public:
	StackInt ( );
	int pop ( );
	void push ( int val );
	int peek ( );
	~StackInt ( );
};
#endif
