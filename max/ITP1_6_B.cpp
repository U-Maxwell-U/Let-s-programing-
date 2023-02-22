#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    int card[52] = {0};
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        char c;
        int a = 0;
        cin >> c >> a;

        if (c == 'S')
        {
            card[a - 1] = 1;
        }
        else if (c == 'H')
        {
            card[a - 1 + 13] = 1;
        }
        else if (c == 'C')
        {
            card[a - 1 + 26] = 1;
        }
        else if (c == 'D')
        {
            card[a - 1 + 39] = 1;
        }
    }

    for (int i = 0; i < 52; ++i)
    {
        if (card[i] == 0)
        {
            if (i < 13)
            {
                cout << "S ";
            }
            else if (i < 26)
            {
                cout << "H ";
            }
            else if (i < 39)
            {
                cout << "C ";
            }
            else if (i < 52)
            {
                cout << "D ";
            }
            
            cout << i % 13 + 1;
            cout << endl;
        }
    }

    return 0;
}