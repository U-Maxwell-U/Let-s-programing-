#include <iostream>

using namespace std;

int n, m, l, aa[101][101] = {0}, bb[101][101] = {0};
long cc;

int main()
{

    cin >> n >> m >> l;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            cin >> aa[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < l; j++)
        {

            cin >> bb[i][j];
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < l; ++j)
        {
            if (j)
                cout << " ";

            cc = 0;
            for (int k = 0; k < m; ++k)
            {
                cc += aa[i][k] * bb[k][j];
            }
            cout << cc;
        }
        cout << endl;
    }

    return 0;
}
