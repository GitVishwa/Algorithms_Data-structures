#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void) {
	int i_index=0,j_index=0;
	int* num = (int* )malloc(sizeof(int));
	while(1){
		scanf("%d",&num[i_index]);
		if(num[i_index]==42) break;
		else printf("%d\n",num[i_index]);
		i_index++;
	}
	free(num);
	return 0;
}
