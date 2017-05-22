/* Rewrite ther temperature conversion program of Section 1.2 
   to use a function for conversion */



#include<stdio.h>
#include<stdlib.h>

void TemperatureConversion() {
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;	
	while(fahr <= upper) {
		celsius = (5.0 / 9.0) * (fahr - 32.0);	
		printf("%3.0f %6.1f\n",fahr,celsius);
		fahr = fahr + step;
	}
	
}
int main(void) {
       TemperatureConversion();
	return 0;
}
