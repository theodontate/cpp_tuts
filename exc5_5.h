#ifndef id765
#define id765

class A;

class C {
	public:
		void doSomething ( A a );
};

class A {
	int i;
	public:
		void init ( );
		friend class B;
		friend void C::doSomething ( A a );
};

class B {
	public:
		void takeAShit( A a );
};


#endif
