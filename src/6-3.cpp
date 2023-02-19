#include<iostream>
#include<stdio.h>
#include <climits>
#include <cmath>

int n;
int room[4][3][10] = {0};

int main(){

    std::cin >> n;
    int b, f, r, v;
    for (int i = 0; i < n; i++) {
		std::cin >> b >> f >> r >> v;
        room[b-1][f-1][r-1] += v;
	}

    for (int b = 0; b < 4; b++){
        for (int f = 0; f < 3; f++){
            for (int r = 0; r < 10; r++)
            {
                std::cout << " " << room[b][f][r];
            }
            std::cout << std::endl;
        }
        if (b < 3){
        std::cout << "####################" << std::endl;
        }
    }
	return 0;
}
