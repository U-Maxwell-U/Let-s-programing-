#include <iostream>

int main(int argc, char const *argv[])
{

    int a, b;
    std::cin >> a >> b;
    int perimeter, area;
    perimeter = a + a + b + b;
    area = a * b;
    std::cout << area << " " << perimeter << std::endl;
    return 0;
}
