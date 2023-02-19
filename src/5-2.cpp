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
                if (i == 0)//ue
                {
                    std::cout << "#";
                }

                else if (i == h-1)//sita
                {
                    std::cout << "#";
                }

                else if (j == 0)//hidari
                {
                    std::cout << "#";
                } 

                else if (j == w-1)//migi
                {
                    std::cout << "#";
                } 
                
                else {//naka
                    std::cout << ".";
                }
            }            
            std::cout << std::endl;
        }
        std::cout << std::endl;
        std::cin >> h >> w;
    }
	return 0;
}

