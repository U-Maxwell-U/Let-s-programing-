
#include<iostream>
#include<stdio.h>
#include <vector>


using namespace std;
int main(){
    int n;
    cin >> n;
    int r[n];
    for(int i = 0; i < n; i++){
        cin >> r[i];
    }
    for(int i = n - 1; i >= 0; i--){
        cout << (i != n - 1 ? " ":"") << r[i];
    }

  cout << endl;
  return 0;
}
