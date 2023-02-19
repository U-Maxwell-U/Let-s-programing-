#include <iostream>

int main(int argc, char const *argv[])
{
    int X[100000];
    int i = 0;
    while(1){

        std::cin >> X[i];
        
        if (X[i] == 0){
            break;
        }i++;

        
    }
    for (int j = 0; j < i;j++)
        std::cout << "Case " << j + 1 << ": " << X[j]<<std::endl;
    return 0;
}
