#include<stdio.h>
#include<stdlib.h>
int check(int num) {
	int count=0;
	switch(num) {
	case 1:
		count+=2;
		break;
	case 2:
		count+=5;
		break;
	case 3:
		count+=5;
		break;
	case 4:
		count+=4;
		break;
	case 5:
		count+=5;
		break;
	case 6:
		count+=6;
		break;
	case 7:
		count+=3;
		break;
	case 8:
		count+=7;
		break;
	case 9:
		count+=6;
		break;
	case 0:
		count+=6;
		break;
	}
	return count;
}

int main(void) {
int count=0,i_index=0,j_index=0;
int num=0,temp=0,n=0;
int *arr = (int *)malloc(sizeof(int));
scanf("%d",&i_index);
while(j_index<i_index) {
scanf("%d",&num);
while(num) {
	n = num%10;
	count+=check(n);
	num/=10;
}
arr[j_index] = count;
j_index++;
count=0;
n=0;
}
for(j_index=0;j_index<i_index;j_index++) {
	printf("%d Leds\n",arr[j_index]);
}
return 0;
}
