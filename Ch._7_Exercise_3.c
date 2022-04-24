// Modify the program so that any number of repsonses can be entered.
// So that the user does not have to count the number of responses in the list,
// set up the progrma so that the value 999 can be keyed in by the user to indiciate that the last response has been entered.
// Hint: you can use the break statement here if you want to exit your loop.

#include <stdio.h>

int main(void){
	int ratingCounters[999], index, response;

	for ( index = 1; index <= 10; ++index ) {
		ratingCounters[index] = 0;
	}

	printf("Enter your responses\n");


	// this is the input from the user
	do {
		scanf("%i", &response);

		if ( response < 1 || response > 998 ) {
			printf("Bad response, sorry!\n");
		}
		else {
			++ratingCounters[response];
		}
	}
	while (response != 999);

	
	printf("\n\nRating Number of Responses\n");
	printf("-----------------------===\n");

	for ( index = 1; index <= 10; ++index ) {
		printf("%4i%14i\n", index, ratingCounters[index]);
	}



	return 0;
}
