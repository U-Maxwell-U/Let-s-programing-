#include <iostream>

using namespace std;

int W, H, x, y, r;

int main(){

    cin >> W >> H >> x >> y >> r;

    if (x - r >= 0 && y - r >= 0 && x + r <= W && y + r <= H)
    {
        cout << "Yes" << endl;
    }

    else
    {
        cout << "No" << endl;
    }

    return 0;
}