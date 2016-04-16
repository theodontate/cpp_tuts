//: Stack.h
// Nested struct in linked list
#ifndef id98765
#define id98765

struct Stack {
	struct Link {
		void* data;
		Link* next;
		void initialize ( void* dat, Link* nxt );
	}* head;

	void initialize ( );
	void push ( void* dat );
	void* peek ( ) ;
	void* pop ( );
	void cleanup ( );
};
#endif
