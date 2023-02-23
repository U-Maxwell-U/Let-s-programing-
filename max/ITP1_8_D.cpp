#include <iostream>
#include <string>
#include <ctype.h>
#include <stdio.h>

using namespace std;

int main()
{
    string s, p;
    
    cin >> s >> p;
    
    s += s;
    
    if (s.find(p) != string::npos)
    {
        cout << "Yes" << endl;
    }
    
    else
    {
        cout << "No" << endl;
    }
    
    return 0;
}
