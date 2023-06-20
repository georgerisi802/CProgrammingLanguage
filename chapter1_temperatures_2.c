#include <stdio.h>

main(){ /* Similar to first temp converter but C->F using for loop instead of while */
	float celsius;
	float fahr;
	
	for(celsius = -20; celsius <= 200; celsius = celsius + 20){
		fahr = celsius * (9.0/5.0) + 32;
		printf("%4.0f %6.1f\n", celsius, fahr);
	}	
	
	/* It is bad practice to bury "magic numbers" like 200 and 20 in the for loop. It is better practice to declare them
		as symbolic constants like this:
		
	#define LOWER -20
	#define UPPER 200
	#define STEP 20
	
		Note there is no semicolon at the end of the line and the symbolic constants are all caps.*/
}
