#include<stdio.h>
#include<stdlib.h>

int Trailingzeroes(int num) {
	int count=0,i=0;
	for(i=5;num/i>=1;i*=5) {
		count += num/i;
	}
	return count;
}
int main(void) {
	int num,n,i_index=0,j_index;
	int* arr = (int *)malloc(sizeof(int));
	scanf("%d",&n);
	while(n--) {
		scanf("%d",&num);
		arr[i_index++] = Trailingzeroes(num);
		num = 0;
	}
	for(j_index=0;j_index<i_index;j_index++) {
		printf("%d\n",arr[j_index]);
	}
	return 0;
}

