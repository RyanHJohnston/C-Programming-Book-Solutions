// Fibnoacci sequence without array lists

#include <stdio.h>

int main(void) {
	int currentNum, firstPreviousNum = 1, secondPreviousNum = 0;

	for ( unsigned int index = 0; index < 15; ++ index) {
		currentNum = secondPreviousNum + firstPreviousNum;
		printf("%i ", currentNum);
		
		secondPreviousNum = firstPreviousNum;
		firstPreviousNum = currentNum;
	}

	return 0;
}
