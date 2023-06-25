#include <stdio.h>

main(){
	printf("3^4 = ");
	printf("%i", power(3,4)); /* Function call */
	printf("\n2^5 = ");
	printf("%i", power(2,5)); /* Function call */
	printf("\n");
}

/* Raises x to the nth power */
power(x, n)
int x, n;
{
	int i,p;	
	p = 1;
	for(i=1; i <=n; ++i) p = p * x;
	
	return(p);
}
