#include<iostream>
#include<stdlib.h>
#define M 100000007
#define MAX 100

int fibonacci(int num) {

	int a = 0;
	int b = 1;
	int c = a + b;
	for(int i_index = 2;i_index <= num;i_index = i_index + 1) {
		c = b + a;
		a = b;
		b = c;
	}
	return c; 
}
int main(void) {

	int k_index = 0,i_index = 0,j_index = 0;
	int *res = new int[MAX];
	std::cin >> k_index;
	while(j_index < k_index) {
		std::cin >> i_index;
		res[j_index] = fibonacci(i_index);
		j_index = j_index + 1;
	}
	for(int j_index = 0;j_index < k_index;j_index++) {
		std::cout <<res[j_index]; 
		std::cout << std::endl;
	}
	return 0;
}

