/*
	Implementation of Quick sort
	@Author Vishwanath Gulabal
*/

#include<iostream>
#include<stdlib.h>
#include<time.h>
#define MAX 1000

using namespace std;

int arr[MAX];

void swap(int *a,int *b){
	
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int arr[],int low,int high){
	
	int pivot = arr[high];
	
	//int j_index = 0;
	int i_index = (low - 1);
		
	for(int j_index = low; j_index<=high - 1;j_index++){
		if (arr[j_index] <= pivot){
			i_index++;
			swap(&arr[i_index],&arr[j_index]);
		}
	}
	swap(&arr[i_index+1],&arr[high]);
	return (i_index+1);
}


void quick_sort(int arr[],int i_index,int num){

	if(i_index < num) {
		int p = partition(arr,i_index,num);
		quick_sort(arr,i_index,p - 1);
		quick_sort(arr,p + 1, num);
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
	quick_sort(arr,0,num-1);
	end = clock();
	
	cpu_execute_time = ((double)(end-start)) / CLOCKS_PER_SEC;
	cout << "After sorting the elements are " << endl;
	for(int i_index = 0;i_index < num;i_index++) {
		cout << arr[i_index] << endl;
	}
	
	cout << "The time taken is " << cpu_execute_time << "seconds " << endl;
	return 0;
}
