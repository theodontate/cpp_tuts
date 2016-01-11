#include <iostream>
#include <string>
using namespace std;

enum ShapeType {
	Circle,
	Rectangle,
	Square
};

int main() {
	ShapeType shape = Circle;
	switch (shape) {
		case Circle :
			cout << "This is a circle";
			break;
		case Rectangle :
			cout << "This is a rectange";
			break;
		case Square :
			cout << "This is a Square";
			break;
	}
	return 0;
}

