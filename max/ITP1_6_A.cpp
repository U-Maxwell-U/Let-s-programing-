#include <iostream>

using namespace std;

int n, m[101];

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> m[i];
    }

    for (int i = n; i >= 1; i--)
    {
        cout << m[i];
        if (i == 1)
        {
            cout << endl;
        }
        else
        {
            cout << " ";
        }
    }
}