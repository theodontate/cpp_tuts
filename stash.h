#ifndef id654
#define id654

class Stash {
	int size;
	int quantity;
	int next;

	unsigned char* storage;
	void inflate ( int increase );

	public:
		void initialize ( int size );
		void cleanup ( );
		int add ( void* element );
		void* fetch ( int index );
		int count ( );
};

#endif
