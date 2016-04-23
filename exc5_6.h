#ifndef id231
#define id231

class Hen {
	int i;

	public:
		void display ( );
		class Nest {
			int k;

			public:
				friend Hen;
		};
};
#endif
