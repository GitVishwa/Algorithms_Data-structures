/* Write the function htoi(s), which converts a string of hexadecimal  digits (including an optional 0x or 0X) into its equivalent integer
  value. The allowable digits are 0 through 9, a through f, and A  through F. */

#include <stdio.h>
#include <stdlib.h>

int htoi(char s[])
{
    int i;
    int c, n;
    
    n = 0;
    for (i = 0; (c = s[i]) != '\0'; ++i) {
        n *= 16;
        if (i == 0 && c == '0') {
            
		c = s[++i];
            if (c != 'x' && c != 'X')
                --i;
        } else if (c >= '0' && c <= '9')
            
		n += c - '0';
        else if (c >= 'a' && c <= 'f')
            
		n += 10 + (c - 'a');
        else if (c >= 'A' && c <= 'F')
        
		 n += 10 + (c - 'A');
        else
            return n;
    }
    return n;
}

int main(void)
{
    char s[1000];
    int i, c;
    for (i=0; (c = getchar()) != '\n'; i++)
        s[i] = c;
    s[i] = '\0';
    printf("%s: %d\n", s, htoi(s));
    return 0;
}


