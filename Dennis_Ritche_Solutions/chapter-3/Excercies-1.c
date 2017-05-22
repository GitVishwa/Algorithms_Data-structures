/*Our binary search makes two tests inside the loop, when one would suffice (at the price of more tests outside). Write a version with only one test inside the loop and measure the difference in run-time.*/

#include<stdio.h>
#include<stdlib.h>

int binary_search(int arr[],int i_index,int num,int number){
	int low = 0;
	int high = num;
	int mid = 0;
	while(low <= high && number != arr[mid]){
		mid = (low+high) / 2;
		if(number < arr[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	if( number == arr[mid])
		return mid;
	else
		return -1;
}
int main(void) {
	int arr[100],number=0;
	int num = 0,i_index = 0;
	scanf("%d",&num);
	for(i_index = 0;i_index<num;i_index++){
		scanf("%d",&arr[i_index]);
	}
	printf("ENTERED ELEMENTS ARE \n");
	for(i_index = 0;i_index < num;i_index++){
		printf("%d ",arr[i_index]);
	}
	i_index = 0;
	printf("ENTRE THE NUMBER TO SEARCH\n");
	scanf("%d",&number);
	i_index = binary_search(arr,0,num-1,number);
	if(i_index == -1)
		printf("Element is not found");
	else
		printf("Element is found at %d\n",i_index+1);
	
	return 0;
}

