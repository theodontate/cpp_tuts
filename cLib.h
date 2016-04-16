#ifndef id789
#define id789

typedef struct CStashTag {
	int size;
	int quantity;
	int next;
	unsigned char* storage;
} cStash;

void initialize ( cStash* s, int size );
void cleanup ( cStash* s );
int add ( cStash* s, const void* element );
void* fetch ( cStash* s, int index );
int count ( cStash* s );
void inflate ( cStash* s, int increase );


#endif
