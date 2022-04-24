// Write a program that calculates the average of an array of 10 floating point values

#include <stdio.h>

int main(void){
	float userInput;
	unsigned int index;
	float arrayList[10], sum;

	printf("Input ten floating point integers to be calculated: \n");

	for ( index = 0; index < 10; ++index ) {
		scanf("%f", &userInput);
		arrayList[index] = userInput;
	}

	// calculate the sum
	for ( index = 0; index < 10; ++index ) {
		if(index + 1 > 9) {
			break;
		}
		else {
			sum = arrayList[index] + arrayList[index + 1];
		}
	}

	printf("Sum is %0.2F\n", sum);

	return 0;
}
