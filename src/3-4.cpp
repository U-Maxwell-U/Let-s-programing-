#include <iostream>

int main() {
	int a, b, c, n = 0;

	std::cin >> a >> b >> c;

	for (int i = a; i <= b; i++) {
		if (c % i == 0) { 
            n++; 
        }
	}
	std::cout << n << std::endl;
	return 0;
}
