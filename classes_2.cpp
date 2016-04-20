struct X {
	private:
		int i;
		void p_init( int a );
	public:
		void init ( int a );
};

void X::p_init (int a) {
	i = a;
}

void X::init (int a) {
	i = a;
}

int main (int argc, char** argv) {
	return 0;
}
