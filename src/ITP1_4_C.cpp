#include <iostream>

int main(){
    int i = 0;
    bool loop = true;
    int answer[100000];

    while (loop)
    {
        int a,b;
        char op;
        std::cin >> a >> op >> b;
        switch (op)
        {
        case '+':
            answer[i] = a + b;
            break;
        case '-':
            answer[i] = a - b;
            break;
            case '/':
            answer[i] = a / b;
            break;
            case '*':
            answer[i] = a * b;
            break;
            case '?':
            loop = false;
            break;
        default:
            break;
        }
        i++;
    }
    for (int j = 0; j < i-1;j++){
        std::cout << answer[j] << std::endl;
    }
}
