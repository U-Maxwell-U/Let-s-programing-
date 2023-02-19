#include <iostream>
#include <iomanip>
int main(){
    int a, b;
    std::cin >> a >> b;

    std::cout << int(a / b) << " " << int(a % b) << " ";

    std::cout <<std::setprecision(8) << std::fixed  <<  (double)a / b << std::endl;
}
