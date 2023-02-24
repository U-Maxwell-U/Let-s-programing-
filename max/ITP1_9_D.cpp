#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string word;
    int n;

    cin >> word;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        string jadge, c;
        int a, b;

        cin >> jadge >> a >> b;
        if (jadge == "replace")
        {
            cin >> c;
            word = word.replace(a, b - a + 1, c);
        }
        else if (jadge == "print")
        {
            cout << word.substr(a, b - a + 1) << endl;
        }
        else if (jadge == "reverse")
        {
            string mas = word.substr(a, b - a + 1);
            reverse(mas.begin(), mas.end());
            // cout <<"mas=" << mas <<endl;
            word = word.replace(a, b - a + 1, mas);
        }
        // cout << word << endl;
    }
    return 0;
}