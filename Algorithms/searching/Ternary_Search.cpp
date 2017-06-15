/*
	Implementation of Ternary Search
	@Author Vishwnath Gulabal
*/

#include<iostream>
#include<stdlib.h>
#define MAX 1000

using namespace std;

void Ternary_Search(int arr[],int i_index,int j_index,int key){
	int mid_1,mid_2;

	mid_1 = i_index + (j_index - i_index) * 1 / 3;
	mid_2 = i_index + (j_index - i_index) * 2 / 3;
	
	if(key == arr[mid_1]){
		printf("The element is found at %d\n",(mid_1 + 1));
		return;
	}
	else if(key == arr[mid_2]){
		printf("The element is found at %d\n",(mid_2 + 1));
		return;
	}
	if(key < arr[mid_1])
		return Ternary_Search(arr,i_index,mid_1-1,key);
	if(key > arr[mid_2])
		return Ternary_Search(arr,mid_2+1,j_index,key);
	else
		return Ternary_Search(arr,mid_1+1,mid_2-1,key);

}

int main(void){
	int num,i_index;
	int key;
	int arr[MAX];
	cout << "Enter the number of elements "<<endl;
	cin >> num;
	
	cout << "Enter the elements "<<endl;
	for(i_index=0;i_index<num;i_index++) {
		cin >> arr[i_index];
	}
	
	cout << "Enter the number to search "<<endl;
	cin >> key;

	Ternary_Search(arr,0,num-1,key);
	return 0;
}
