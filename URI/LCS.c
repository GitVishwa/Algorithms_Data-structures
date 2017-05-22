#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int max(int a,int b) {
	return a>b?a:b;
}
int LCS(char *str1,char *str2,int m,int n) {

	int LCS[m+1][n+1];
	int i_index=0,j_index=0,result=0;

	for(i_index=0;i_index<m;i_index++) {
		for(j_index=0;j_index<n;j_index++) {

			if(i_index==0 || j_index==0)
				LCS[i_index][j_index]=0;

			else if(str1[i_index-1] == str2[j_index-1]) {
				LCS[i_index][j_index] = LCS[i_index-1][j_index-1]+1;
				result = max(result,LCS[i_index][j_index]);
			}
			else
				LCS[i_index][j_index] = 0;

			}
		}
	return result;
}

int main(void) {

	char  str1[1024],str2[1024];
	fgets(str1,sizeof(str1),stdin);
	fgets(str2,sizeof(str2),stdin);
	printf("%d\n",LCS(str1,str2,strlen(str1),strlen(str2)));

	return 0;
}
