#include <iostream>


int main(){

    int x, y;
    std::cin >> x >> y;
    while(x != 0 && y != 0){

        std::swap(x, y);
        std::cout<< x << " " << y << std::endl;
        std::cin >> x >> y;
    }
    
    return 0;
}
