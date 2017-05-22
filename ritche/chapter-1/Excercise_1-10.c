/* Write a program to copy its input to its output, replacing each tab by \t, each backspace
   by \b, and each backslah by \\.This makes tabs and backspaces visible in an unambiguous way. */

#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int c=0;
	
	while ((c = getchar()) != EOF) {

		switch(c) {
			case '\t': 
				   printf("\\t");
				   break;
			case '\b':
				   printf("\\b");
				   break;
			case '\\':		
				   printf("\\\\");
				   break;	
			default:
				  printf("%c",c);

		}
	}
	return 0; 
}
