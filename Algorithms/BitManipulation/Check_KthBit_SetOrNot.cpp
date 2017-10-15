#include<iostream>
#include<stdlib.h>

int main(void){

	int num,k,mask;
	std::cout << "Enter the number and kth bit" << std::endl;
	std::cin >> num >> k;

	mask = 1 << (k - 1) ;

	if( num & mask) 
		std::cout << k << "th bit is set " <<std::endl;
	else
		std::cout << k << "th bit is not set " <<std::endl;
	return 0;
}
