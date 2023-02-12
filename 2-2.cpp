#include <iostream>

int main(){
    int a, b, c;
    std::cin >> a >> b >> c;
    if (a < b && b << c){ //アイズの仕様上 a < b < c の書き方はアクセプトしてくれない
        std::cout << "Yes" << std::endl;
    }

    else {
        std::cout << "No" << std::endl;
    }

    return 0;
}
