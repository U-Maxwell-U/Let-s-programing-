#include <iostream>

int main(){
    int n;
    int a[1000];
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }
    for (int i = n-1; i >=0; i--)
    {
         std::cout << a[i] ;
         if(i==0)
             break;
         std::cout << " ";
    }

    std::cout << std::endl;


}
