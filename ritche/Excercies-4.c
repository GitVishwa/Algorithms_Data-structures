/*Write an alternative version of squeeze(s1,s2) that deletes each character in s1 that matches any character in the string s2 */.
#include <stdio.h>

int getlength(char s[], int len)
{
    int c, i, l;

    for (i = 0, l = 0; (c = getchar()) != EOF && c != '\n'; ++i)
        if (i < len - 1)
            s[l++] = c;
    s[l] = '\0';

    return l;
}


void squeeze_function(char str1[], char str2[])
{
    int i, j, k;

    i = 0;
    while (str2[i] != '\0') {
        j = 0;
        while (str1[j] != '\0') {
            if (str1[j] == str2[i]) {
                k = j;
                while ((str1[k] = str1[++k]) != '\0')
                    ;
            } else
                ++j;
        }
        ++i;
    }
}

int main(void)
{
    int len;
    char str1[1000];
    char str2[1000];

    printf("Input string s1:\n");
    while ((len = getlength(str1, 1000)) == 0)
        ;

    printf("Input string s2:\n");
    while ((len = getlength(str2, 1000)) == 0)
        ;

    squeeze_function(str1, str2);
    printf("Result is %s\n", str1);

    return 0;
}
