/*
	Implementation of Counting Sort
	@Author Vishwanath Gulabal
*/

#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<algorithm>
#include<vector>

#define MAX 1000

using namespace std;

int arr[MAX];

void counting_sort(int arr[],int num,int max){

	int count[num] = {0},i_index,j_index;
		
	for(i_index = 0;i_index < num;i_index++){
		count[arr[i_index]]++;
	}
	
	for(i_index = 0;i_index <= max;++i_index){
		for(int j_index = 1;j_index <=count[i_index];++j_index)
		cout << i_index << endl;
	}
}


int main(void) {

	int num,max = 0;
	clock_t start,end;
	double cpu_execute_time;

	cout << "Enter the number of elements to be executed "<<endl;
	cin >> num;
	
	cout << "Enter " << num << "  Elements " <<endl;
	for(int i_index = 0;i_index < num;i_index++){
		cin >> arr[i_index] ;
		if(arr[i_index] > max)
		max = arr[i_index];
	}
		
	cout << "Entered elements before sorting " <<endl;
	for(int i_index = 0;i_index < num;i_index++){
		cout << arr[i_index] << endl;
	} 
	
	//Counting Sort
	start = clock();
	counting_sort(arr,num,max);
	end = clock();
	
	cpu_execute_time = ((double)(end-start)) / CLOCKS_PER_SEC;
	
	cout << "The time taken is " << cpu_execute_time << "seconds " << endl;
	return 0;
}
