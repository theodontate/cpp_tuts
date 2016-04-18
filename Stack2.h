//: Stack2.h
// Nested struct in linked list FIFO
#ifndef id9809
#define id9809

struct Stack {
	struct node {
		void* data;
		node* next;
		node* previous;
		void initialize ( void* dat, node* previous );
	}* head;

	void initialize ( );
	void push ( void* data );
	void* peek ( );
	void* peekBase ( );
	void* pop ( );
	void* reversePop ( );
	void cleanup ( );
};
#endif
