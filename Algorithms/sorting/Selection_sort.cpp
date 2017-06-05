/*
	Selection sort implementation in C
	@Author Vishwanath Gulabal
*/
#include<iostream>
#include<stdlib.h>
#include<time.h>

#define MAX 1000
using namespace std;

int arr[MAX];

int main(void) {

	int num,min_pos;
	//for measure time taken by the program 
	clock_t start,end;
	double cpu_time_used;

	cout << "Enter the numbers of elements to be sorted " << endl;
	cin >> num;
	
	cout << "Enter " << num << " elements "<< endl;
	for(int i_index = 0; i_index < num;i_index++) {
		cin >> arr[i_index];
	}
	
	cout << "Before sorting the elements are "<< endl;
	for(int i_index = 0;i_index < num;i_index++) {
		cout << arr[i_index] << endl;
	}

	//Selection sort
	start = clock();
	for(int i_index = 0;i_index < num - 1;i_index++) {
			min_pos = i_index;
		for(int j_index = i_index + 1;j_index < num;j_index++){
				if(arr[j_index] < arr[min_pos]){
					int temp = arr[j_index];
					arr[j_index] = arr[min_pos];
					arr[min_pos] = temp; 
				}
			}
	}
	end = clock();
	cout << "After sorting " << endl;
	for(int i_index=0;i_index<num;i_index++){
		cout << arr[i_index] << endl;
	   }
	
	cout << "the time taken to execute the function in seconds is " << endl;
	cpu_time_used = ((double)(end-start)) / CLOCKS_PER_SEC;
	cout << cpu_time_used << endl;
	return 0;
}
