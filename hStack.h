#ifndef id453
#define id453

class hStack {
	class hNode {
		void* element;
		hNode* next;
		public:
		hNode ( void* element, hNode* next );
		void* getElement ( );
		hNode* getNext ( );
	}* head;

	public:
		hStack ( );
		void push (void* element);
		void* pop ( );
		void* peek ( );
};
#endif
