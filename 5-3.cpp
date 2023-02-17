#include<iostream>
#include<stdio.h>
#include <climits>
#include <cmath>

using namespace std;

int main(){
    int i, n ,x;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x = i;
        if (x % 3 == 0)
        {
            cout << " " << i;
        }

        else
        {
            for (; x ;)
            {
                if (x % 10 == 3)
                {
                    cout << " " << i;
                    x = 0;
                }
                x /= 10;
            }
            
        }
        
    }

    cout << endl;

	return 0;
}
