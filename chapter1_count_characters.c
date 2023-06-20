#include <stdio.h>

/* This program is intended to count the number of characters entered.
	Despite being a textbook example, it doesn't quite work how you expect.
	It counts the line returns as characters, so if you input 1 letter, then hit enter, the result is 2. */
main(){
	long count;
	
	for(count = 0; getchar() != EOF; ++count); /* The EOF character is ctrl-d on the keyboard */
	
	printf("%li\n", count);
}
