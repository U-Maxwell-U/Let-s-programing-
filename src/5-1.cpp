#include<iostream>
#include<stdio.h>
#include <climits>
#include <cmath>

int h, w;


int main(){
    std::cin >> h >> w;
    while (h || w)
    {
        
        for (int i = 0; i < h; i++){
            for (int j = 0; j < w; j++)
            {
         
                std::cout << "#";

          
            }
            
            std::cout << std::endl;
        }
        std::cout << std::endl;
         std::cin >> h >> w;
    }
    

    

	return 0;
}


