/* Verify that the expression getchar() != EOF is 0 or 1. */
/*The result is neither 0 nor 1 */

#include<stdio.h>

int main(void) {

	int c;
	while ((c = getchar()) != EOF)
		putchar(c); 
	return 0;
}
