#include <iostream>

using namespace std;

int i = 1;

int main(){

    while (1)
    {
        int a;
        cin >> a;
        if (a == 0)
        {
            break;
        }

        cout << "Case " << i << ": " << a << endl;
        i++;
        
    }
    


    return 0;
}