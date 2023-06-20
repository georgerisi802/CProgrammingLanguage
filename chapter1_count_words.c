#include <stdio.h>

#define TRUE 1
#define FALSE 2

/* This program counts the number of words separated by spaces, newlines, or tabs.
	It is a bare-bones approximation of the Linux utility wc */
main(){
	int c, nw, inword;
	
	nw = 0;
	inword = FALSE;
	while((c = getchar()) != EOF){
		if(c == ' ' || c == '\n' || c == '\t') inword = FALSE;
		
		else if(inword == FALSE){
			inword = TRUE;
			++nw;
		}
	}
	printf("%d\n", nw);
}
