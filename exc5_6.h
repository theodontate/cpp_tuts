#ifndef id231
#define id231

class Hen {
	int i;
	public:
		Hen ( int i );
		void display ( );
		class Nest {
			int k;
			public:
				Nest ( int k );
				friend class Hen;
				void display ( );
				class Egg {
					int j;

					public:
						Egg ( int j );
						friend class Nest;
						void display();

				};
				void displayEgg ( Egg e );

		};
		void displayNest ( Nest a );
};
#endif
