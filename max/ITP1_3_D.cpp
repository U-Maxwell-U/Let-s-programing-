#include <iostream>
using namespace std;

int main()
{
    int a, b, c, i, n = 0;
    cin >> a >> b >> c;

    for (i = a; i <= b; ++i)
    {
        if (c % i == 0)
            ++n;
    }

    cout << n << endl;
}