#include <stdio.h>

main(){ /* Similar to first temp converter but C->F using for loop instead of while */
	float celsius;
	float fahr;
	
	for(celsius = -20; celsius <= 200; celsius = celsius + 20){
		fahr = celsius * (9.0/5.0) + 32;
		printf("%4.0f %6.1f\n", celsius, fahr);
	}	
}
