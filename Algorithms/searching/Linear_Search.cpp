/*
	Implementation of Linear Search
	@Author Vishwnath Gulabal
*/

#include<iostream>
#include<stdlib.h>
#define MAX 1000

using namespace std;

int main(void){
	int num,i_index=0;
	int key,flag=0;
	int arr[MAX];

	cout << "Enter the number of elements "<<endl;
	cin >> num;
	
	cout << "Enter the elements "<<endl;
	for(i_index=0;i_index<num;i_index++) {
		cin >> arr[i_index];
	}
	
	cout << "Enter the number to search "<<endl;
	cin >> key;
	
	//linear search
	for(i_index=0;i_index<num;i_index++) {
		if(arr[i_index] == key){
			cout << "Element is found at " << i_index + 1 <<endl;
			flag++;
		}
		
	}
	if(flag == 0)
		cout << "Element is not present is the array"<<endl;
	return 0;

}
