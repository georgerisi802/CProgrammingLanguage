#include <stdio.h>

/* This program counts the digits, white spaces, and other characters in the input string */
main(){
	int c, i;
	int ndigit[12]; /* 0-9=digits 0-9, 10=other characters, 11=white spaces */
	for(i=0; i<12; ++i) ndigit[i] = 0; /* All elemets initialized to 0 */
	
	while((c = getchar()) != EOF){
		if(c >= '0' && c <= '9') ++ndigit[c - '0'];
		
		else if(c == ' ' || c == '\n' || c == '\t') ++ndigit[11];
		
		else ++ndigit[10];
	}
	
	printf("\n");
	
	for(i=0; i<10; ++i){
		printf("\n");
		printf("%i", i);
		printf(" = ");
		printf("%i", ndigit[i]);
	}
	
	printf("\n");
	printf("Whitespace = ");
	printf("%i", ndigit[11]);
	
	printf("\n");	
	printf("Other = ");
	printf("%i", ndigit[10]);
	printf("\n");
}
