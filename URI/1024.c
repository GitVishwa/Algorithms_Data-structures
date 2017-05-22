#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int IsDigit(int num) {
    if(num>=0 && num<=9)
        return 1;
    return 0;
}

int IsCharacter(char ch) {
    if(ch>=65 && ch<=122)
        return 1;
    return 0;
}

int main(void) {

    int i=0;
    char str[1024];
    fgets(str,strlen(str),stdin);

    for(i=0; i<strlen(str); i++) {

        if(IsDigit(str[i])) {
            printf("%c",str[i]);
        }
        if(IsCharacter(str[i])) {
            printf("%d",str[i]);
        }
    }
    printf("\n");

    return 0;
}
