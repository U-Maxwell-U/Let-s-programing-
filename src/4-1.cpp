#include <iostream>
#include <iomanip>


int main() {
	int a, b, c, d;
	float f;

	std::cin >> a >> b;

	c = a / b;
    d = a % b;

	std::cout << c << " " << d << " " << std::fixed << (double) a / b << std::endl;
	//std::showpoint << f << std::endl;
	return 0;
}
