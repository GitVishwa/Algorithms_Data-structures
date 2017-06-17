/*
	Implementation of Insertion sort
	@Author Vishwanath Gulabal
*/

#include<iostream>
#include<stdlib.h>
#include<time.h>
#define MAX 1000

using namespace std;

int arr[MAX];


void insertion_sort(int arr[],int num){
	
	int key,j_index;
	for(int i_index = 1; i_index < num;i_index++){
		key = arr[i_index];
		j_index = i_index - 1;
	
		while(j_index >=0 && arr[j_index] > key){
			arr[j_index+1] = arr[j_index];
			j_index = j_index - 1;
		}
		arr[j_index + 1] = key;
	}
}


int main(void) {

	int num;
	clock_t start,end;
	double cpu_execute_time;

	cout << "Enter the number of elements to be executed "<<endl;
	cin >> num;
	
	cout << "Enter " << num << "  Elements " <<endl;
	for(int i_index = 0;i_index < num;i_index++){
		cin >> arr[i_index] ;
	}
		
	cout << "Entered elements before sorting " <<endl;
	for(int i_index = 0;i_index < num;i_index++){
		cout << arr[i_index] << endl;
	} 
	
	//Quick Sort
	start = clock();
	insertion_sort(arr,num);
	end = clock();
	
	cpu_execute_time = ((double)(end-start)) / CLOCKS_PER_SEC;
	cout << "After sorting the elements are " << endl;
	for(int i_index = 0;i_index < num;i_index++) {
		cout << arr[i_index] << endl;
	}
	
	cout << "The time taken is " << cpu_execute_time << "seconds " << endl;
	return 0;
}
