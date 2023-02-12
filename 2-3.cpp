#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int a, b, c;

int main(){

    cin >> a >> b >> c;
    int syouzyun[3] = {a, b, c};
    sort(syouzyun, syouzyun + 3);
    cout << syouzyun[0] << " " << syouzyun[1] << " " << syouzyun[2] << endl;

    return 0;
}
