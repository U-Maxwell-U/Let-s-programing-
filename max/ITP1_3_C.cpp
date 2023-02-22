#include <iostream>

using namespace std;



int main(){

    while (1)
    {
        int x, y ,z;
        cin >> x >> y;
        if (x == 0 && y == 0)
        {
            break;
        }

        if (x > y)
        {
            z = x;
            x = y;
            y = z;
        }
        

        cout << x << " " << y << endl;
     
        
    }
    


    return 0;
}