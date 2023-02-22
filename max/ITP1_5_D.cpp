#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            cout << " " << i;
        }

        else
        {
            int j = i;
            for (;j != 0;)
            {
                if (j % 10 == 3)
                {
                    cout << " " << i;
                    break;
                }

                j = j / 10;
            }
        }
    }
    cout << endl;
    return 0;
}
