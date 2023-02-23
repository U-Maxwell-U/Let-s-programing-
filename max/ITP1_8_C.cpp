#include <iostream>

using namespace std;


int main(){

    char ch;
    int abc[26] = {}; //a~z　までが25のアスキーコードとして与えられている

    while (cin >> ch)
    {
        ch = tolower(ch);

        //std::cout << "nani ; " << ch << endl;

        if (isalpha(ch))
        {
            abc[ch - 'a']++;
        }
        
        
    }
    for (int i = 0; i < 26; i++)
        {
            std::cout << ch << " : " << abc[i] << std::endl;
        }
    

    return 0;
}
