/*In a two's complement number representation, our version of itoa does
  not handle the largest negative number, that is, the value of n equal
  to -(2^(wordsize - 1)). Explain why not. Modify it to print that
  value correctly regardless of the machine on which it runs.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>


void reverse(char s[]){

	int c, i_index, j_index;

    	for (i_index = 0, j_index = strlen(s)-1; i_index < j_index; i_index++, j_index--) {
        	c = s[i_index];
        	s[i_index] = s[j_index];
        	s[j_index] = c;
    	}
}

void itoa(int n, char str[])
{
    int i_index, sign;

    sign = n;
    i_index = 0;
    do {        /*digits in reverse order */
        str[i_index++] = abs(n % 10) + '0';     /* next digit */
    } while (n /= 10);                  
    if (sign < 0)
        str[i_index++] = '-';
    str[i_index] = '\0';
    reverse(str);
}

int main(void)
{
    int n = INT_MIN;
    char str[100];

    itoa(n, str);
    printf("%s\n", str);
    
    return 0;
}

