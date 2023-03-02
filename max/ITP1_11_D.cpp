#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
    int me1 = 0, me2 = 0, me3 = 0, me4 = 0;
    int daisu[101][7];
    int n = 0, pattern = 0, b = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            cin >> daisu[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            for (int k = 0; k < 1000; k++)
            {
                pattern = rand() % 4;
                if (pattern == 0)
                {
                    me1 = daisu[i][1];
                    me2 = daisu[i][3];
                    me3 = daisu[i][4];
                    me4 = daisu[i][6];
                    daisu[i][1] = me3;
                    daisu[i][3] = me1;
                    daisu[i][4] = me4;
                    daisu[i][6] = me2;
                }
                else if (pattern == 1)
                {
                    me1 = daisu[i][1];
                    me2 = daisu[i][2];
                    me3 = daisu[i][5];
                    me4 = daisu[i][6];
                    daisu[i][1] = me2;
                    daisu[i][2] = me4;
                    daisu[i][5] = me1;
                    daisu[i][6] = me3;
                }
                else if (pattern == 2)
                {
                    me1 = daisu[i][1];
                    me2 = daisu[i][2];
                    me3 = daisu[i][5];
                    me4 = daisu[i][6];
                    daisu[i][1] = me3;
                    daisu[i][2] = me1;
                    daisu[i][5] = me4;
                    daisu[i][6] = me2;
                }
                else if (pattern == 3)
                {
                    me1 = daisu[i][1];
                    me2 = daisu[i][3];
                    me3 = daisu[i][4];
                    me4 = daisu[i][6];
                    daisu[i][1] = me2;
                    daisu[i][3] = me4;
                    daisu[i][4] = me1;
                    daisu[i][6] = me3;
                }
                for (b = 1; b <= 6; b++)
                    if (daisu[i][b] != daisu[j][b])
                        break;
                if (b == 7)
                {
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}