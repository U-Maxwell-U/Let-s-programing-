
#include <iostream>

int main()
{
	int w, h, x, y, r;
	
    std::cin >> w >> h >> x >> y >> r;
	if (r <= x && r <= y && x <= (w - r) && y <= (h - r)) {
        std::cout << "Yes" << std::endl;
    }
	else {
        std::cout << "No" << std::endl;
    }
	return 0;
}
