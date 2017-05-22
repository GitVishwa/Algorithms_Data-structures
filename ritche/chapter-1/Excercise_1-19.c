/* Write a function reverse(s) that reverses the character string s.
   Use it to write a program that reverses its input a line at a time */


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAXLINE 1000


void swap(char *str1,int len) {
	int i = 0;	
	while(i <= len) {
	char temp = str1[i];
	     str1[i] = str1[len];
	     str1[len] = temp;
	     i = i + 1;
	     len = len - 1;	
	}
}

void reverse(char *str) {

	int i = 0,j = 0;	
		
	while(1) {
		if ( *(str+j) == ' ' || *(str+j) == '\n') {
			swap(str+i,j - i);
			i = j + 1;
		}
	       if(*(str + j) == '\n')
			break;
		j++;
	}
	printf("%s\n",str);
}

int main(void) {

	char s[MAXLINE];
	printf("Enter the line you want to reverse\n");
	fgets(s,MAXLINE,stdin);
	puts(s);
	reverse(s);
	return 0;	
}
