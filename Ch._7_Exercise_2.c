// Modify Program 6.1 so that the elements of the array values are initially set to 0.
// Use a for loop to perform the initialization

#include <stdio.h>
int main (void)
{
	int arrayList[10];

	for (int i = 0; i < 10; ++i) {
		arrayList[i] = i;
		printf("%i ", arrayList[i]);
	}
	
	return 0;
}
