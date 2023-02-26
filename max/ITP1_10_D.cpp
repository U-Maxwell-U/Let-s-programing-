#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int x[n];
    int y[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> y[i];
    }

    for (int A = 1; A <= 3; A++)
    {
        double ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += pow(fabs(x[i] - y[i]), A);
        }
        cout << fixed << pow(ans, 1.0 / A) << endl;
    }
    double ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (ans < fabs(x[i] - y[i]))
        {
            ans = fabs(x[i] - y[i]);
        }
    }
    cout << fixed << ans << endl;

    return 0;
}