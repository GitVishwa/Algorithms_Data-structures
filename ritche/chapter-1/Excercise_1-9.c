/* Write a program to copy its inputs to output, replacing each string of 
   one or more blanks by a single blank */

#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int c=0, n_blank=0;
	
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
				while ((c=getchar()) != EOF);
				putchar(' ');
				putchar(c);
		}
		else
			putchar(' ');
	}

	return 0; 
}
