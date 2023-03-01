#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

struct Daisu
{
    int q1;
    int q2;
    int q3;
    int q4;
    int q5;
    int q6;

    int q7;
    int q8;
    int q9;
    int q10;
    int q11;
    int q12;
};

int main()
{
    Daisu d;
 
    cin >> d.q1 >> d.q2 >> d.q3 >> d.q4 >> d.q5 >> d.q6;
    cin >> d.q7 >> d.q8 >> d.q9 >> d.q10 >> d.q11 >> d.q12;

    while (!(d.q1 == d.q7 && d.q2 == d.q8))
    {
        if (d.q4 == d.q8 || d.q3 == d.q8)
        {
            int tmp = d.q1;
            d.q1 = d.q4;
            d.q4 = d.q6;
            d.q6 = d.q3;
            d.q3 = tmp;
        }
        while (d.q2 != d.q8)
        {
            int tmp = d.q1;
            d.q1 = d.q2;
            d.q2 = d.q6;
            d.q6 = d.q5;
            d.q5 = tmp;
        }
        while (d.q1 != d.q7)
        {
            int tmp = d.q1;
            d.q1 = d.q4;
            d.q4 = d.q6;
            d.q6 = d.q3;
            d.q3 = tmp;
        }
    }

    if (d.q3 == d.q9 && d.q4 == d.q10 && d.q5 == d.q11)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}