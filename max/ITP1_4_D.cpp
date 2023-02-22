#include <iostream>
#include <string>
using namespace std;

int main()
{
    long int a[1000000], n, min, max, ave;
    min = 100000000;
    max = -100000000;
    ave = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (min > a[i])
        {
            min = a[i];
        }
        if (max < a[i])
        {
            max = a[i];
        }
        ave += a[i];
    }
    cout << min << " " << max << " " << ave << endl;
    return 0;
}