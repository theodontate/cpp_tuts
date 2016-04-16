#include <iostream>

enum ShapeType {
	circle,
	square,
	rectangle
};

int main() {
	ShapeType shape = circle;
	switch (shape) {
		case circle :
	        case square :
		case rectangle :
		std::cout << "Enum is great." << std::endl;
	}
	return 0;
}

