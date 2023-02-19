#include<iostream>
#include<stdio.h>

int main(){
	int a, b, c;
 	char op;
  	std::cin >> a >> op >> b;
 	while(op != '?'){

    	if (op == '+'){
			c = a + b;
		}

		else if (op == '-'){
			c = a - b;
		}
			
		else if (op == '*'){
			c = a * b;
		}
			
    	else if (op == '/'){
			c = a / b;
		}
			
    std::cout << c << std::endl;
    std::cin >> a >> op >> b;
	}

	return 0;
}
