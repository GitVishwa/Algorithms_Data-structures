#include<iostream>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

char *change(char *str) {

	int i_index=0;
	int j_index=0;
	while(i_index < strlen(str)) {
		if(i_index==0 && isupper(str[i_index]))
			i_index = i_index + 2;
		if(str[i_index] != ' ')
			str[i_index] = str[i_index] - 32;
			i_index = i_index + 2;
	}
	return str;
}
int main(void) {

	char buffer[1024];// = (char *) malloc(sizeof(char));
	char *arr = (char *) malloc(sizeof(char));

	fgets(buffer,sizeof(buffer),stdin);
	cout<< "Some dude" <<endl;
	puts(buffer);
	strcpy(arr,change(buffer));	
	puts(arr);
	return 0;
}	
