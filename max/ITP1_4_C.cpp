#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    while (1)
    {
        int a, b;
        char op;
        cin >> a >> op >> b;
        if (op == '?')
        {
            break;
        }
        if (op == '+')
        {
            cout << a + b << endl;
        }
        if (op == '-')
        {
            cout << a - b << endl;
        }
        if (op == '*')
        {
            cout << a * b << endl;
        }
        if (op == '/')
        {
            cout << a / b << endl;
        }
    }
}