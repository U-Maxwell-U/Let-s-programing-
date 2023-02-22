#include <iostream>

using namespace std;


int r, c, p[101][101] = {0};


int main()
{

    cin >> r >> c;
    
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){

        cin >> p[i][j];
        cout << "rr" << p[i][j] << " ";

    }

        

    }


    return 0;
}