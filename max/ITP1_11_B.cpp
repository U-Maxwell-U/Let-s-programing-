#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

struct Daisu //結局構造体使ってない
{
    int q1;
    int q2;
    int q3;
    int q4;
    int q5;
    int q6;
};

int main()
{
    int PA[6] = {};
    for (int i = 0; i < 6; i++)
    {
        cin >> PA[i];
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int me1, me2;
        cin >> me1 >> me2;
        for (int j = 0; j < 6; j++)
        {
            if (me1 == PA[j])
            {
                me1 = j;
                break;
            }
        }
        for (int k = 0; k < 6; k++)
        {
            if (me2 == PA[k])
            {
                me2 = k;
                break;
            }
        }
        int migi;
        if (me1 == 0 && me2 == 1){
            migi = 2;
        }
            
        if (me1 == 0 && me2 == 2){
            migi = 4;
        }
            
        if (me1 == 0 && me2 == 3){migi = 1;}
            
        if (me1 == 0 && me2 == 4){migi = 3;}
            
        if (me1 == 1 && me2 == 0){migi = 3;}
            
        if (me1 == 1 && me2 == 2){migi = 0;}
            
        if (me1 == 1 && me2 == 3){migi = 5;}
            
        if (me1 == 1 && me2 == 5){migi = 2;}
            
        if (me1 == 2 && me2 == 0){migi = 1;}
            
        if (me1 == 2 && me2 == 1)
            migi = 5;
        if (me1 == 2 && me2 == 4)
            migi = 0;
        if (me1 == 2 && me2 == 5)
            migi = 4;
        if (me1 == 3 && me2 == 0)
            migi = 4;
        if (me1 == 3 && me2 == 1)
            migi = 0;
        if (me1 == 3 && me2 == 4)
            migi = 5;
        if (me1 == 3 && me2 == 5)
            migi = 1;
        if (me1 == 4 && me2 == 0)
            migi = 2;
        if (me1 == 4 && me2 == 2)
            migi = 5;
        if (me1 == 4 && me2 == 3)
            migi = 0;
        if (me1 == 4 && me2 == 5)
            migi = 3;
        if (me1 == 5 && me2 == 1)
            migi = 3;
        if (me1 == 5 && me2 == 2)
            migi = 1;
        if (me1 == 5 && me2 == 3)
            migi = 4;
        if (me1 == 5 && me2 == 4)
            migi = 2;
        cout << PA[migi] << endl;
    }
}