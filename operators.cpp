#include <iostream>
#include <string>
using namespace std;

#define PRINT(STR, VAR) \
	cout << STR " = " << VAR << endl;

int main() {
	int i, j, k;
	//float u, v, w;

	cout << "enter an integer : ";
	cin >> j;
	cout << "enter another integer : ";
	cin >> k;
	PRINT("j", j); PRINT("k", k);
	i = j + k; PRINT("j + k", i);
	i = j * k; PRINT("j * k", i);
	i = j - k; PRINT("j - k", i);
	i = j / k; PRINT("j / k", i);
	i = j % k; PRINT("j % k", i);

	return 0;
}

