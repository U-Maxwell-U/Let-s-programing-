#include <iostream>
#include <string>
#include <ctype.h>
#include <stdio.h>

using namespace std;

int main()
{
    while (1)
    {
        string word;
        int m;

        cin >> word;

        if (word == "-"){
            break;
        }

        cin >> m;
        for (int i = 0; i < m; ++i)
        {
            int h;
            cin >> h;

            string oo = word.substr(0, h);
            word = word + oo;
            // cout << "ooが＋されたword : " << word << endl;
            word = word.substr(h, word.size());
            // cout << "出来上がったword : " << word << endl;
        }

        cout << word << endl;
    }
    return 0;
}