#include<iostream>
#include<stdio.h>
#include <climits>
#include <cmath>

int main(){
	int n;
	std::cin >> n;
	
	long min, max;
	long long sum;
	min = 1000000;
	max = -1000000;
    sum = 0;
    int m;


    for (int i = 0; i < n; i++)
    {
		std::cin >> m;

        sum += m;
        if (min > m)   min = m;

        if (max < m)   max = m;

		
    }

    std::cout << min << " " << max << " " << sum << std::endl;

	return 0;
}


