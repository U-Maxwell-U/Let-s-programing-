#include <iostream>
#include <ctype.h>
#include <stdio.h>

using namespace std;


int main(){

    char ch;
    int abc[26] = {}; //a~z　までが25のアスキーコードとして与えられている

    while (cin >> ch)//最初の入力からEOFまで繰り返す
    {


        ch = tolower(ch);//大文字を小文字に変換

        //cout << "nani ; " << ch << endl;

        if (isalpha(ch))//もし英文字が入力されたなら
        {
            int num = ch - 'a';  // 文字 ch の番号 を格納？？？？？？？？？？
            abc[num]++;
            //abc[ch - 'a']++; //a~zまでの文字をカウント
            //cout << "nani ; " << ch << endl;
            //cout << ch << " : " << abc[num] << endl;
        }
        
        
    }
    for (int i = 0; i < 26; i++)//25回分出力する
        {
            ch = 'a' + i; //こいつなにこれなぁに？？？？？？？？？？？？
            
            cout << ch << " : " << abc[i] << endl;
        }
    

    return 0;
}
