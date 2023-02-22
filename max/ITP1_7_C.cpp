#include <iostream>

using namespace std;

int main()
{
    int r, c, qp[101] = {}, qq = 0;
    cin >> r >> c;
    int pp[101][101];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> pp[i][j];
        }
    }
    
    for (int i = 0; i <= r; i++){
        qq = 0;
        for (int j = 0; j <= c; j++)
        {
            if (i != r)
            {
                if (j != c)
                {
                    qq += pp[i][j];
                    qp[j] += pp[i][j];
                }

                if (j == c)
                {
                    cout << qq << endl;
                }

                else
                {
                    cout << pp[i][j] << " ";
                }
            }
            else
            {
                if (j != c)
                {
                    qq += qp[j];
                }

                if (j == c)
                {
                    cout << qq << endl;
                }

                else
                {
                    cout << qp[j] << " ";
                }
            }
        }
    }
}