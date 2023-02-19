#include <iostream>
#include <map>

std::map<char, int> card_logo{
    {'S', 0}, {'H', 1}, {'C', 2}, {'D', 3}};
char card_number[]{'S', 'H', 'C', 'D'};
int main()
{
    int n;
    bool cards[4][13] = {false};
    std::cin >> n;
    for (int i = 0; i < n;i++){
        char cardtype;
        int num;
        std::cin >> cardtype >> num;
        
        cards[card_logo.at(cardtype)][num - 1] = true; 
    }
    for (int i = 0; i < 4;i++){
        for (int j = 0; j < 13;j++){
            if (!cards[i][j])
                std::cout << card_number[i] << " " << j+1 << std::endl;
        }
    }
    
}
