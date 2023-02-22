#include <iostream>
#include <iomanip>

using namespace std;

int main(){

	int a, b, c, d;

	cin >> a >> b;
	
    c = a / b;

    d = a % b;

	cout << c << " " << d << " ";
	cout << fixed << setprecision(6) << (double)a/b << endl;

	return 0;
}