#ifndef id2345
#define id2345

class Stack {
	struct Link {
		void* data;
		Link* next;
		void initialize ( void* data, Link* link );
	}* head;

	public:
		void initialize ( );
		void push ( void* data );
		void* peek ( );
		void* pop ( );
		void* cleanup ( );
};

#endif
