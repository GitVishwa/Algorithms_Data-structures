/*
	Implementation of merge sort
	@Author Vishwanath Gulabal
*/

#include<iostream>
#include<stdlib.h>
#include<time.h>
#define MAX 1000

using namespace std;

int arr[MAX];

void merge(int arr[],int low,int mid,int high){
	
	int i = 0;
	int j = 0;
	int n1 = (mid - low) + 1;
	int n2 = (high - mid);
	int k = low;
	
	int c[n1], d[n2];

	for(int i_index = 0;i_index < n1;i_index++)
		c[i_index] = arr[low+i_index];
	
	for(int j_index = 0;j_index < n2;j_index++)
		d[j_index] = arr[mid+1+j_index];

	while(i < n1 && j < n2){
		if(c[i] < d[j]){
			arr[k] = c[i];
			k++;
			i++;
		}
		else {
			arr[k] = d[j];
			k++;
			j++;
		} 	
			
	}
	while(i < n1) {
		arr[k] = c[i];
		i++;
		k++;
	}
	
	while(j < n2){
		arr[k] = d[j];
		j++;
		k++;
	}

}

void merge_sort(int arr[],int i_index,int num){

	if(i_index < num) {
		int mid = i_index +(num - i_index)/2;
		merge_sort(arr,i_index,mid);
		merge_sort(arr,mid + 1, num);
		merge(arr,i_index,mid,num);
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
	
	//Merge Sort
	start = clock();
	merge_sort(arr,0,num-1);
	end = clock();
	
	cpu_execute_time = ((double)(end-start)) / CLOCKS_PER_SEC;
	cout << "After sorting the elements are " << endl;
	for(int i_index = 0;i_index < num;i_index++) {
		cout << arr[i_index] << endl;
	}
	
	cout << "The time taken is " << cpu_execute_time << "seconds " << endl;
	return 0;
}
