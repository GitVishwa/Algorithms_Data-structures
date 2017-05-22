#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;


int check_palindrome(char *buff,int len) {

	int i_index=0;
	while(i_index != len) {

		if(buff[i_index] != buff[len])
			return 0; 
		i_index++;
		len--;
	}
	return 1;
}
int checkPalindrome(char *buff) {

	int i_index=0,j_index=0,count=0;
	while(1) {

		if(*(buff+j_index) == ' ' || *(buff+j_index) == '\0') {
			if(check_palindrome(buff+i_index,j_index-i_index))
				count++;
			i_index = j_index + 1;
		}
		if(*(buff+j_index) == '\0') break;
		
		j_index++;
	}
	return count;
	
}
int main(void) {

	char buff[1024];
	char *arr = (char *) malloc(sizeof(char));

	fgets(buff,sizeof(buff),stdin);
	cout << "There are this "<<endl;
	puts(buff);

	int count = checkPalindrome(buff);

	cout << "There are " << count << "palindromes in the " << puts(buff) << endl;
	return 0;
}
