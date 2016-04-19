#ifndef id897
#define id897

struct FloatStash {
	struct node {
		float value;
		node* next;
	}* head;

	void init ( );
	void push ( float a );
	float pop ( );
	float* peek ( );
	void cleanup ( );
};

#endif
