#include<stdio.h>
#include<stdlib.h>
int IsPrime(int num) {
	int i_index=0,flag=0;
	for(i_index=2;i_index<=num/2;i_index++) {
		if(num%i_index==0) flag++;
	}
	if(flag!=0)
		return 1;
	return 0;
}
void printPrime(int a,int b) {
	int i_index,j_index=b,k_index=0;
	for(i_index=a;i_index<=j_index;i_index++) {
		if(IsPrime(i_index))
			arr[k_index] = i_index;
		i_index++;
	}
	for(i_index=0;i_index<k_index;i_index++) {
		printf("%d",
	}
}
int main(void) {
	int num,a,b,i_index,j_index;
	scanf("%d",&num);
	while(num--){
		scanf("%d%d",&a,&b);
		printPrime(a,b);
	}
	return 0;
}
