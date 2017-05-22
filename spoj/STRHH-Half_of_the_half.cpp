#include<iostream>
#include<string.h>

int main(void) {

	int k,j = 0,p = 3;
	std::cin >> k;
	char** string = new char*[k];
	for(int i=0; i<k; ++i)
		string[i] = new char[100];

	int i = 0;
	while( i < k ) {
		std::cin >> string[i];	
		i = i + 1;
	}
	std::cout << std::endl; 
	std::cout << std::endl;
	while(j < k) {
		if(j%2 == 0)
			std::cout << string[j][0] << std::endl;
		else {
			for(int i = 0; i < p; i = i + 2)
				std::cout << string[j][i];	
			std::cout << std::endl;
			p = p + 2;
		}
		j = j + 1;
		
	}

	return 0;
}
