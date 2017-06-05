#include<iostream.h>
#include<stdlib.h>
#include<time.h>
#define MAX 1000

void merge_sort(int arr,int i_index,int num){

	
}
int main(void) {

	int num;
	clock_t start,end;
	double cpu_execute_time;

	cout << "Enter the number of elements to be executed "<<endl;
	cin >> num
	
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
	merge_sort(arr,0,num);
	end = clock();
	
	cpu_execute_time = ((double)(end-start)) / CLOCKS_PER_SEC;
	cout << "After sorting the elements are " << endl;
	for(int i_index = 0;i_index < num;i_index++) {
		cout << arr[i_index] << endl;
	}
	
	cout << "The time taken is " << cpu_execute_time << endl;
	return 0;
}
