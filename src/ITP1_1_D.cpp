#include <iostream>

int main(int argc, char const *argv[])
{

    int a;
    std::cin >> a ;
    int h,m,s;
    h = a / 3600;
    m = (a % 3600)/60;
    s = a % 60;
    std::cout << h << ":" << m<<":"<<s << std::endl;
    return 0;
}
