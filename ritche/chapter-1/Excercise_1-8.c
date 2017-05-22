/* Write a program to count blanks, tabs, ans newlines */

#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int c=0, n_line=0, n_tab=0, n_blank=0;
	
	while ((c = getchar()) != EOF) {
		if (c == '\n')	n_line++;

		if (c == '\t') n_tab++;

		if (c == ' ') n_blank++;
	}
	printf("New Lines = %d\n",n_line);
	printf("New Tab = %d\n",n_tab);
	printf("New Blank = %d\n",n_blank);
	return 0; 
}
