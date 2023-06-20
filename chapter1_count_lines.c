#include <stdio.h>

/* This program counts the lines in the input by counting newline characters */
main(){
	int c, nl;
	
	nl = 0;
	while((c = getchar()) != EOF){
		if (c == '\n') ++nl;
	}
	
	printf("%d\n", nl);
}
