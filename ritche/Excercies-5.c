/* Write the function any(s1,s2), which results the first location in the string s1 where any character from the string s2 occurs, or -1 if s1 contains no characters from s2*/
#include<stdio.h>

int getLine(char s[],int len)
{
    int i,c;
    for(i=0;i<len-1 && (c=getchar())!=EOF && c!='\n';++i)
        s[i]=c;

    if(c=='\n')
        s[i++]=c;
    s[i]='\0';
}

int any(char str1[],char str2[])
{
    int i,j,check_next_char;

    check_next_char=1;

    for(i=0;str1[i]!='\0'&& (check_next_char);) 
    {
        for(j=0;str2[j]!='\0'&& (str1[i]!=str2[j]);++j) 
		;
        if(str2[j]=='\0') {
            check_next_char=1;
		i++;
        }
        else
            check_next_char=0; // match found
    }

    if(str1[i]=='\0')
        return -1;
    else
        return i;
}

int main(void)
{
    char str1[1000];
    char str2[1000];
    int val;
        
    getLine(str1,1000);
    
    getLine(str2,1000);

    val = any(str1,str2);

    printf("%d",val);
    return 0;
}


