#include <iostream>
#include <string>
#include <ctype.h>
#include <stdio.h>

using namespace std;

int main()
{
    string tk, hk;
    int n, tkP = 0, hkP = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tk >> hk;
        if (tk == hk){
            tkP++, hkP++;
        }
            
        else if (tk > hk){
            tkP += 3;
        }
            
        else{
            hkP += 3;
        }
            
    }
    cout << tkP << " " << hkP << endl;
}