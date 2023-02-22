#include <iostream>
#include <iomanip>
#include<cmath>

using namespace std;

double r;

int main(){

    cin >> r;
    cout << setprecision(6) <<fixed<< M_PI * r * r << " " << M_PI * r * 2 << endl;

    return 0;
}