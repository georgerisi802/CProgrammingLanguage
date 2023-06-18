#include <stdio.h>

/* Prints a table converting various Fahrenheit temps to Celsius */
main(){
	int lower;	/* lower limit of temp table */
	int upper;	/* upper limit of temp table */
	int step;	/* step size */
	/* variables of same type can also be declared as comma-separated list, but its not good practice */
	float fahr, celsius;
	
	lower = 0; 
	upper = 308; 
	step = 20;
	
	/* Print a heading above the table */
	printf(" _F_|___C__\n");
	
	/* Print the table itself */
	fahr = lower;
	while(fahr <= upper){
		celsius = (5.0/9.0) * (fahr - 32.0); 		/* 5/9 would truncate, 5.0/9.0 forces floats */
		printf("%4.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
	
}
