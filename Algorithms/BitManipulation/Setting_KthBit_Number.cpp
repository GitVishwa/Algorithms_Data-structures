#include<iostream>
#include<stdlib.h>

int main(void){
		
	int num,k,mask;

	std::cout << "Enter the number and kth bit "<< std::endl;
	std::cin >> num >> k;

	mask = 1 << (k - 1);
	
	num = num | mask;

	std::cout << "The number after setting " << k << "bit " << num <<std::endl;

	return 0;
}		
