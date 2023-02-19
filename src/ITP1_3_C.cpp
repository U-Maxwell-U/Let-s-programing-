#include <iostream>

int main(int argc, char const *argv[])
{
    int a[3000][2];
    int i = 0; 
    while(1){
        int x, y;
        std::cin >> x >> y;
        if(x+y==0){
            break;
        }
        if(x>y){
            a[i][1] = x;
             a[i][0] = y;
        }else {
            a[i][0] = x;
             a[i][1] = y;
        }
        i++;
    }
    for (int j = 0; j < i;j++){
        std::cout << a[j][0] <<" " <<a[j][1]<< std::endl;
    }

        return 0;
}
