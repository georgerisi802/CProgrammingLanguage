#include <stdio.h>

main(){ /* This program copies keyboard input to terminal outpput */
	
	/* c must be an int instead of a char because getchar() can return the EOF value that is beyond the char range */
	int c;
	
	/* Compilers define symbolic constant EOF in the stdio.h as either -1 or 0, depending on OS */
	while((c = getchar()) != EOF){ 
		/* Assignment with parentheses will return the value of the assignment */
		putchar(c);
	}
}
