#include <stdio.h>
#include <stdlib.h>

/* returns one if ch1-ch2 is a valid range. */
int validation(char ch1, char ch2)
{
    if (('a' <= ch1 && ch1 <= 'z') && (ch1  <= ch2 && ch2 <= 'z')) /* valid range in a-z */
        return TRUE;
    if (('A' <= ch1 && ch1 <= 'Z') && (ch1  <= ch2 && ch2 <= 'Z')) /* valid range in A-Z */
        return TRUE;
    if (('0' <= ch1 && ch1 <= '9') && (ch1  <= ch2 && ch2 <= '9')) /* valid range in 0-9 */
        return TRUE;
    
    return FALSE;   /* not a valid range */
}

/* expansion for string in str2 */
void expansion(char str1[], char str2[])
{
    int i_index, j_index;
    char temp;
    int dash = 0;

    for (i_index = j_index = 0; str1[i_index] != '\0'; ++i_index) {
        if (str1[i_index] == '-') {
            if (i_index == 0 || str1[i_index+1] == '\0') {
                /* if '-' is leading, just copy it. */
                str2[j_index++] = str1[i_index];
            } else {
                /* check if this is a valid range. */
                if (validation(str1[i_index-1], str1[i_index+1])) {
                    while (str2[j_index-1] < str1[i_index+1]) {
                        str2[j_index] = str2[j_index-1] + 1;
                        j_index++;
                    }
                    /* skip next character */
                    ++i_index;
                } else {
                    str2[j_index++] = str1[i_index];
                }
            }
        } else {
            str2[j_index++] = str1[i_index];
        }
    }
    str2[j_index] = '\0';
}

int main(void)
{
    char str1[1024];
    char str2[1024];
	
    gets(str1);
    
    expansion(str1, str2);
    
    printf("%s\n", str2);
    
    return 0;
}



