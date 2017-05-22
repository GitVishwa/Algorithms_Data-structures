#include<iostream>

using namespace std;

int main(void) {

	int num = 1000;
	int sum = 0;
	for(int i=0;i<num;i++) {
		if(i%3==0 && i%5==0) 
				sum += i;
		else if(i%3==0)
				sum += i;
		else if(i%5==0)
				sum += i;
	}
	cout << sum << endl;
	return 0;
}
