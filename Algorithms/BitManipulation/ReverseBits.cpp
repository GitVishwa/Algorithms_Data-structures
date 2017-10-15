#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>

int main(void) {
	uint32_t n,m=0;

	std::cout << "Enter the number to reverse the bits" << std::endl;
	std::cin >> n;

	for(int i=0;i<32;i++, n >>= 1){
		m <<= 1;
		m |= n & 1;
	}	
	std::cout <<"The number is " << m << std::endl;
	return 0;
}
