#include <iostream>
#include <string.h>
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
};

int main()
{
    Daisu d;
    char me;

    cin >> d.q1 >> d.q2 >> d.q3 >> d.q4 >> d.q5 >> d.q6;

    while (cin >> me)
    {
        if (me == 'N')
        {
            int tmp = d.q1;
            d.q1 = d.q2;
            d.q2 = d.q6;
            d.q6 = d.q5;
            d.q5 = tmp;
        }
        else if (me == 'E')
        {
            int tmp = d.q1;
            d.q1 = d.q4;
            d.q4 = d.q6;
            d.q6 = d.q3;
            d.q3 = tmp;
        }
        else if (me == 'W')
        {
            int tmp = d.q1;
            d.q1 = d.q3;
            d.q3 = d.q6;
            d.q6 = d.q4;
            d.q4 = tmp;
        }
        else if (me == 'S')
        {
            int tmp = d.q1;
            d.q1 = d.q5;
            d.q5 = d.q6;
            d.q6 = d.q2;
            d.q2 = tmp;
        }
    }

    cout << d.q1 << endl;

    return 0;
}