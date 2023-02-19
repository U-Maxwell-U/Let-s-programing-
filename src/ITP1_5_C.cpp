#include <iostream>

int main(){
     int i = 0;
    int answer[100000][2];

    while (1)
    {

        std::cin >> answer[i][0]  >> answer[i][1];
        if(answer[i][0]+answer[i][1]==0)
            break;
        i++;
    }
    for (int j = 0; j < i;j++){
        for (int k = 0; k < answer[j][0];k++){
            for (int l = 0; l < answer[j][1];l++){
                if((k+l)%2){
                    std::cout << ".";}
                    else {
                        std::cout << "#";
                    }
            }
            std::cout <<std::endl;
            }
            std::cout <<std::endl;
    }

}
