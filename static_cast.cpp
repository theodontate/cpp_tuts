#include <iostream>
using namespace std;

int main() {
	int i = 0x7fff;
	long l;
	float f;
	l = i;
	f = i;

	l = static_cast<long> (i);
	f = static_cast<float> (i);
	cout << l << endl << f << endl;
	char c = static_cast<char> (i);
	cout << c << endl;
	void* vp = &i;
	float* fp = (float*)vp;
	//the new way is equally dangerous
	fp = static_cast<float*> (vp);
	cout << *fp << endl;
	double d = 0.0D;
	int x = d;
	x = static_cast<double> (d);
	cout << x;
	return 0;
}
