#include <iostream>

using namespace std;

int main()
{
    int heya[4][3][10] = {};
    int b, f, r, v, n;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> b >> f >> r >> v;
        heya[b - 1][f - 1][r - 1] += v;
    }

    for (int b = 0; b < 4; b++)
    {
        for (int f = 0; f < 3; f++)
        {
            for (int r = 0; r < 10; r++)
            {
                cout << " " << heya[b][f][r];
            }
            cout << endl;
        }
        if (b != 3)
        {
            cout << "####################" << endl;
        }
    }
    return 0;
}
