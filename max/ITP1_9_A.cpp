#include <iostream>
#include <string>
#include <ctype.h>
#include <stdio.h>

using namespace std;

int main()
{
    int word = 0;
    string W, T;
    cin >> W;
    for (int i = 0; i < W.size(); ++i)
    {
        W[i] = tolower(W[i]);
    }
    while (cin >> T)
    {
        if (T == "END_OF_TEXT")
        {
            break;
        }
        for (int i = 0; i < T.size(); ++i)
        {
            T[i] = tolower(T[i]);
        }
        if (W == T)
        {
            ++word;
        }
    }
    cout << word << endl;

    return 0;
}