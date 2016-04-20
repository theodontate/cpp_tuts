#ifndef id231
#define id231

struct Stack {
	struct node {
		int value;
		node* next;
		void init ( int val, node* nxt );
	}* head;

	void init ( );
	int* pop ( );
	void push ( int value );
};

#endif
