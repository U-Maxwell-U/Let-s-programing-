#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>

using namespace std;

int main()
{
    cout << fixed << setprecision(20);
    while (1)
    {
        int n;
        cin >> n;
        if (n == 0)
        {
            break;
        }
        double score[n] = {};
        for (int i = 0; i < n; i++)
        {
            cin >> score[i];
        }
        double Goukei = 0;
        for (int i = 0; i < n; i++)
        {
            Goukei = Goukei + score[i];
        }
        double ave = Goukei / n;
        double Bun = 0;
        for (int i = 0; i < n; i++)
        {
            Bun = Bun + pow(score[i] - ave, 2);
        }
        double Bunsan = Bun / n;
        double Hensa = sqrt(Bunsan);
        cout << Hensa << endl;
    }
}