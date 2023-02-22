#include <iostream>

using namespace std;

int main()
{
    int H, W;
    cin >> H >> W;

    while (1)
    {
        for (int i = 0; i < H; i++)
        {
            for (int j = 0; j < W; j++)
            {
                if (j < W)
                {
                    cout << "#";
                }
            }
            cout << endl;
        }
        cout << endl;

        cin >> H >> W;

        if (H == 0 || W == 0)
        {
            break;
        }
        }
}
