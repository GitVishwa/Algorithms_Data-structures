/* WRITE A PROGRAM TO DETERMINE THE RANGES OF CAHR, SHORT, INT AND LONG VARIABLES
   BOTH SIGNED AND UNSIGNED,BY PRINTING APPROPRIATE VALUES FROM STANDARD HEADRES 
   AND BY DIRECT COMPUTATION, HARDER IF YOU COMPUTE THEM: DETERMINE THE RANGES OF TEH VARIOUS FLOATING-POI   NT TYPES */


#include<stdio.h>
#include<stdlib.h>

int main(void) {
	
	char ch;
	int int_num;	
	short sh_num;	
	unsigned long long int big_int;
	
	printf("char : %d\n",sizeof(ch));
	printf("int : %d\n",sizeof(int_num));	
	printf("short : %d\n",sizeof(sh_num));
	printf("unsigned long long : %lld\n",sizeof(big_int));
	return 0;
}
