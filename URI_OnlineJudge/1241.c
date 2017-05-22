#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void) {

	char str1[1024],str2[1024];
	int len1=0,len2=0,i_index=0,count=0,j_index=0,num,k_index=0;
	char display[1024][1024];

	scanf("%d",&num);
	while(num--) {
	count=0;
	k_index=0;
	len2 = 0;
	len1 = 0;
	j_index=0;
/*	fgets(str1,sizeof(str1),stdin);
	fgets(str2,sizeof(str2),stdin);*/
	scanf("%s",str1);
	scanf("%s",str2);

	len2 = strlen(str2)-1; 
	len1 = strlen(str1)-1;
	
	i_index = len1-len2;
	while(i_index<len1) {
		if(str1[i_index] != str2[j_index]) 
			break;
		else {
			count++;
		}
		i_index++;
		j_index++;
		
	}
	if(count==len2)
		strcpy(display[k_index++],"encaixa");
	else
		strcpy(display[k_index++],"nao encaixa");
	}
	
	for(i_index=0;i_index<num;i_index++) {
		puts(display[i_index]);
	}
	return 0;
}
