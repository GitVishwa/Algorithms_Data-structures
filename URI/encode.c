#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int check(char ch) {

	if((ch>='a' && ch<='z') || (ch=='A' && ch=='Z'))
		return 1;
	return 0; 

}
void checkString(char *str) {
	
	int i_index=0,strLen=0;
	while(str[i_index]!='\0') {
		char ch = str[i_index];
		if(check(ch)){
			str[i_index] += 13;
		}
		i_index++;
	}
	puts(str);
}
int main(void) {

	char str[1024];
	fgets(str,sizeof(str),stdin);
	checkString(str);
	return 0;

}
