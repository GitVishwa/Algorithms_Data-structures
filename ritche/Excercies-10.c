/*Rewrite the function lower, which converts upper case letters to lower case, with a conditional expression instead of if-else .*/

#include<stdio.h>

char tolower(char temp){

	return temp + 'a' - 'A';

}

int main(void){

	printf("%c\n",tolower('A'));
	return 0;
}
