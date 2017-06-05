/*
	Implementation of Binary Search
	@Author Vishwanath Gulabal
*/
#include<iostream>
#include<stdlib.h>
#define MAX 1000

using namespace std;

int main(void) {

	int num,key,mid,low,high,flag=0;
	int arr[MAX];
	
	cout << "Enter the number of elements "<< endl;	
	cin >> num;
	
	cout << "Enter the elements in sorted order" <<endl;
	for(int i_index=0;i_index<num;i_index++) {
		cin >> arr[i_index];
	}
	
	cout << "Enter the key " << endl;
	cin >> key;

	low = 0;
	high = num -1;
	while(low <= high) {
		mid = (low+high) / 2;
		if(arr[mid] == key){
			cout << "Element is found at " << mid+1 << endl;
			flag++;
			break; 
		}
		else if(arr[mid] > key)
			high = mid - 1;
		else
			low = mid + 1;
	}
	if(flag == 0)
		cout << "Element is not present " << endl;

	return 0;	
}
