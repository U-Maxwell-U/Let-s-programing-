#include <iostream>

using namespace std;

int main()
{
    while (1)
    {
        int n, x, m = 0;
        cin >> n >> x;
        if (n == 0 && x == 0)
        {
            break;
        }

        for (int i = 1; i <= n - 2; i++)
        {
            //cout << "i = " << i << endl;
            for (int j = i + 1; j <= n - 1; j++)
            {
                //cout << "j = " << j << endl;
                for (int k = j + 1; k <= n; k++)
                {
                    // cout << "i = " << i << endl;
                    // cout << "j = " << j << endl;
                    // cout << "k = " << k << endl << endl;
                    if (i + j + k == x)
                    {
                        //cout << "x = " << x << endl;
                        m++;
                    }
                }
            }
        }
        cout << m << endl;
    }
}