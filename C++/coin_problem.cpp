/*

Coin change problem

*/
#include<iostream>

int max(int a,int b){
	return a>b?a:b;
}
int main(void) {

	int p[] = {0,1,5,8,9,10,10,17,1720,24,30};
	int n = 4;
	for(int i=1;i<=n;i++) {
		for(int j = 1;j<=i/2;j++) {
			p[i] = max(p[i],p[j]+p[i-j]);
			std::cout << i << " : " << p[i];
			std::cout << std::endl;
		}
	}
	std::cout << p[n];
	std::cout << std::endl;
	return 0; 
}
