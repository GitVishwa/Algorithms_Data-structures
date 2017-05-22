/*In a two's complement number system, x &= (x-1) deletes the rightmost 1-bit in x . Explain why. Use this observation to write a faster version of bitcount */

#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int num,i;
	int count = 0;
	scanf("%d",&num);
	while(num != 0){
		num &= (num - 1);
		count = count + 1;
	}
	printf("%d\n",count);
}
