/* Write a program that prints its input one word per line */

#include<stdio.h>
#include<stdlib.h>

int main(void) {

	int c = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') 
			printf("\n");
		else
			putchar(c);
	}
	return 0; 
}
