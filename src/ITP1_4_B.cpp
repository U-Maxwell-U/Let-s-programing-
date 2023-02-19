#include <iostream>
#include <iomanip>
#include<cmath>
int main(){
    double r;
    std::cin >> r ;
    std::cout << std::setprecision(6) << std::fixed << M_PI*r*2 << " " << M_PI*pow(r,2) <<std::endl;
}
