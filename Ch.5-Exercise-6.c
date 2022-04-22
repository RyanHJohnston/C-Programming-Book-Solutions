// Write a program that takes an integer keyed in from the terminal
// and extracts and displays each digit of the integer in English
// So, if the user types in 932, the program should display
// nine three two
// Remember to display zero if the user types in 0
// Remember, this is exercise is a hard one!

#include <stdio.h>

int main(void) {
  // input int from the user
  int number, modifiable_number, reversed_number, number_of_digits,
      increment_by_ten;
  reversed_number = 0;
  number_of_digits = 1;
  increment_by_ten = 1;

  scanf("%i", &number);

  modifiable_number = number;

  while (modifiable_number >= 10) { // used to calculate number of digits
    modifiable_number /= 10;
    ++number_of_digits;
  }

  modifiable_number = number;

  // reversed number algorithm
  while (modifiable_number != 0) {
    reversed_number = (reversed_number * 10) + (modifiable_number % 10);
    modifiable_number /= 10;
  }

  // increments through each digit in the number reversed
  for (unsigned int i = 1; i <= number_of_digits; ++i) {
    modifiable_number = reversed_number % (10 * increment_by_ten);
    modifiable_number = modifiable_number / increment_by_ten;

    switch (modifiable_number) {
    case 0:
      printf("zero ");
      break;
    case 1:
      printf("one ");
      break;
    case 2:
      printf("two ");
      break;
    case 3:
      printf("three ");
      break;
    case 4:
      printf("four ");
      break;
    case 5:
      printf("five ");
      break;
    case 6:
      printf("six ");
      break;
    case 7:
      printf("seven ");
      break;
    case 8:
      printf("eight ");
      break;
    case 9:
      printf("nine ");
      break;
    }
    increment_by_ten *= 10;
  }

  return 0;
}
