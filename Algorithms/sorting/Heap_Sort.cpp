/*
	Implementation of Heap sort
	@Author Vishwanath Gulabal
*/

#include<iostream>
#include<stdlib.h>
#include<time.h>
#define MAX 1000

using namespace std;

int arr[MAX];

void heapify(int arr[],int num,int i_index) {

	int max = i_index;
	int l = 2 * i_index + 1; //left nodes
	int r = 2 * i_index + 2; //right nodes

	if(l < num && arr[l] > arr[max])
		max = l;
	
	if(r < num && arr[r] > arr[max])
		max = r;
	
	if(max != i_index){
		swap(arr[i_index], arr[max]);
		heapify(arr, i_index, max);
	}
}

void heap_sort(int arr[],int num){
	
	for(int i_index = num / 2 - 1;i_index >= 0 ;i_index--)
		heapify(arr,num,i_index);

	for(int i_index = num - 1;i_index >= 0;i_index--){
		swap(arr[0],arr[i_index]);
		heapify(arr,i_index,0);	
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
	
	//Heap Sort
	start = clock();
	heap_sort(arr,num);
	end = clock();
	
	cpu_execute_time = ((double)(end-start)) / CLOCKS_PER_SEC;
	cout << "After sorting the elements are " << endl;
	for(int i_index = 0;i_index < num;i_index++) {
		cout << arr[i_index] << endl;
	}
	
	cout << "The time taken is " << cpu_execute_time << "seconds " << endl;
	return 0;
}
