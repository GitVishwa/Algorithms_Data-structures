/*Write a function escape(s,t) that converts characters like newline and tab into visible escape sequences like \n and \t as it copies the string t to s . Use a switch . Write a function for the other direction as well, converting escape sequences into the real characters.*/

#include<stdio.h>
#include<stdlib.h>
#define MAXLINE 1000

void escape(char s[],char t[]){
	int i_index = 0,j_index = 0;
	
	for(i_index = j_index = 0;t[i_index] !='\0'; ++i_index){
		switch(t[i_index]){
			case '\n':
				s[j_index++] = '\\';
				s[j_index++] = 'n';
				break;
			case '\t':
				s[j_index] = '\\';
				s[j_index] = 't';
				break;
			default:
				s[j_index] = t[i_index];
				break;
		}
	}
		s[j_index] = '\0';
}

void unescape(char s[],char t[]){
	int i_index=0,j_index=0;
	for(i_index=j_index=0;t[i_index] != '\0';i_index++){
		if(t[i_index] == '\\'){
			switch(t[++i_index]) {
				case 'n':
					s[j_index++] = '\n';
					break;
				case 't':
					s[j_index++] = '\t';
					break;
				default:
					s[j_index++] = t[i_index++];
					break;
			}
		}
		s[j_index] = '\0';
	}
}
int main(void) {

	int i_index = 0;
	char t[MAXLINE];
	char s[MAXLINE]; 
	char c;
		
	while((c = getchar()) != -1)
		t[i_index++] = c;
	t[i_index] = '\0';
	
	printf("THE STRING BEFORE MODIFICATION IS %s\n",t);
	escape(s,t);
	printf("THE STRING AFTER MODIFICATION IS %s\n",t);
	unescape(s,t);
	printf("THE STRING AFTER ONE MORE MODIFICATION %s\n",t);
	return 0;
}
