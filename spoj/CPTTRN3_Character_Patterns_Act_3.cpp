#include<iostream>
#include<stdlib.h>


int main(void) {
	int k_test;
	int row, column;
//	std::cin >> k_test;
//	while(k_test--)  {
		std::cin >> row >> column;
		row = row * 3;
		column  = column * 4;
		for(int i_index = 0; i_index < row + 1; i_index = i_index + 1) {
			for (int j_index = 0; j_index < column; j_index = j_index + 1) {
					if (i_index == 0 || j_index == 0 || j_index%3 == 0 || i_index%3 == 0)	
							std::cout << "*" ;
					else
							std::cout << ".";
			}	
			std::cout << std::endl;
		}	
	return 0;
}
