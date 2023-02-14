// #include <iostream>


// int main(){

//     int x, y;
//     std::cin >> x >> y;
//     while((x != 0 && y != 0) || (x != 0 && y == 0) || (x == 0 && y != 0)){

//         std::swap(x, y);
//         std::cout<< x << " " << y << std::endl;
//         std::cin >> x >> y;
//     }
    
//     return 0;
// }






#include <iostream>


int main(){

    int x, y;
    std::cin >> x >> y;
    while(x || y){

        if (y < x){
            std::swap(y, x);
        }
        std::cout<< x << " " << y << std::endl;
        std::cin >> x >> y;
    }
    
    return 0;
}
