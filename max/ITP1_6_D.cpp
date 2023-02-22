#include <iostream>

using namespace std;


int n, m, o[100][100], p[100], q[100] = {0};


int main()
{

    cin >> n >> m;
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){

            cin >> o[i][j];

        }
    }

    for (int i = 0; i < m; i++){

        cin >> p[i];

    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){

            q[i] += o[i][j] * p[j];

        }

        cout << q[i] << endl;

    }



    return 0;
}