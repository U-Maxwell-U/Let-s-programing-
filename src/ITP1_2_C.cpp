#include <iostream>
int a,b,c;
inline void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
} 
int main(int argc, char const *argv[])
{

    std::cin >> a >>b>>c;
    int temp;
    if (c<a){
        swap(c, a);
    }
     if(c<b) {
        swap(c, b);
    }
    if(a>b){
        swap(a, b);
    }
    std::cout << a<< " "<<b<<" "<<c<< std::endl;
    
    return 0;
}
