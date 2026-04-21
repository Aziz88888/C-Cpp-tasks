#include <iostream>

void swap(int a, int b);

int main() {

	int c = 3;
	int d = 5;
	std::cout << "Before swap.\n";
	std::cout << "c = " << c << ", " << "d = " << d << std::endl;
	swap(c, d);
	std::cout << "After swap.\n";
	std::cout << "c = " << c << ", " << "d = " << d << std::endl;

	return 0;
}


void swap(int a, int b) {
	int tmp = a;
	a = b;
	b = tmp;
}