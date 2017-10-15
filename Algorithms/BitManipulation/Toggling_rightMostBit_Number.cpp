#include<iostream>

int main(void){

	int num;

	std::cout << "Enter a number " << std::endl;
	std::cin >> num ; 

	num = num & (num - 1);

	std::cout << "The number after toggling " << num << std::endl;
	return 0;
}

