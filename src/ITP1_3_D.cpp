#include <iostream>

int main(int argc, char const *argv[])
{
    int a, b, c;
    std::cin >> a >> b >> c;
    int count = 0;
    for (;a<=b;a++){
        if(c%a==0){
            count++;
        }
    }
    std::cout << count << std::endl;
        return 0;
}
