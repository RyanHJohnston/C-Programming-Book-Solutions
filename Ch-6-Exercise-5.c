// Program to reverse the digits of a number 
// Implement the negative character

#include <stdio.h>
#include <math.h>

int main(void){
    int number, right_digit;

    printf ("Enter your number\n");
    scanf ("%i", &number);

    if ( number < 0 )
    {
        number *= -1;
        
        do {
            right_digit = number % 10;
            printf ("%i", right_digit);
            number /= 10;
        } 
        while ( number != 0 );

        printf("%c", '-');
    }
    else 
    {
        do {
            right_digit = number % 10;
            printf ("%i", right_digit);
            number /= 10;
        } 
        while ( number != 0 );
    }
    
    printf("\n");

    return 0;
}
