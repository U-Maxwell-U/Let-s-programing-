#include <iostream>

// int main()
// {
//     int size=6;
//     int x[size];
    
//     for(int i=0;i<size;i++)
//     {
//         std::cin>>x[i];
//         std::cout<< "Case :" << std::endl;
//     }
    

// 	return 0;
// }

int main(){

    int x, a, i = 0;
    std::cin >> x;
    while(x != 0){

        i++;
        std::string a = std::to_string(i);
        std::cout<< "Case " << a << ":" << " " << x << std::endl;
        std::cin >> x;
    }
    
    return 0;
}

// #include <iostream>

// int main()
// {
//     int x;
//     std::cin >> x[6] = {3, 5, 11, 7, 8, 19, 0};
//     switch (x = 0){
//         case 1:
//             std::cout << "Case 1:" << x[0] << std::endl;
//         case 2:
//             std::cout << "Case 2:" << x[1] << std::endl;
//         case 3:
//             std::cout << "Case 3:" << x[2] << std::endl;
//         case 4:
//             std::cout << "Case 4:" << x[3] << std::endl;
//         case 5:
//             std::cout << "Case 5:" << x[4] << std::endl;
//         case 6:
//             std::cout << "Case 6:" << x[5] << std::endl;
//             break;
//         default:
//     }
    

// 	return 0;
// }




