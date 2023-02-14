#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>

int main() {
	double r;
	double c, m;

	std::cin >> r;

	m = r * r * M_PI;
    c = 2 * M_PI * r;

	std::cout << std::fixed << m << " " << std::fixed << c << std::endl;

	return 0;
}
