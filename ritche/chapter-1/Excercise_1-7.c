/* Write a program to print the value of EOF */
/*The result is neither 0 nor 1 */

#include<stdio.h>

int main(void) {

	int c;
	printf("%d",EOF);
	while ((c = getchar()) != EOF) {
		putchar(c); 
		printf("\n%d",EOF);
	}
	return 0;
}
