#include <iostream>
#include <string>

using namespace std;



int main(){

    while (1)
    {
        string x;
        cin >> x;
        if (x == "0")
        {
            break;
        }
        int y = 0;
        for (int i = 0; i < x.size(); i++)
        {
            y += x[i] - '0';
        }


        std::cout << y << std::endl;
        
    }
    
    
}
