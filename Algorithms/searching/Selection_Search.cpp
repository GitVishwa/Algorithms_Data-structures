/*
	Implementation of Selection Search
	@Author Vishwnath Gulabal
*/

#include<iostream>
#include<stdlib.h>
#define MAX 1000

using namespace std;

int swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

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
	
	cout << "Enter the kth smallest number to search "<<endl;
	cin >> key;
	
	//Selection Search
	for(i_index=1;i_index<=key;i_index++) {
		int minIndex = i_index;
		int minValue = arr[i_index];
		for(int j_index = i_index + 1;j_index <= num;j_index++)
		if(arr[j_index] < minValue){
			minIndex = j_index;
			minValue = arr[j_index];
			swap(&arr[i_index],&arr[minIndex]);
		}
	}
	cout << "Element is found  " << arr[key] <<endl;

	return 0;

}
