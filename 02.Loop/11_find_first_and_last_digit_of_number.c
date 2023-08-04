// C program to find first and last digit of any number
#include <stdio.h>
int main() 
{
    int num, first_digit, last_digit;

    printf("Enter a Number : ");
    scanf("%d", &num);

    // Find the last digit
    last_digit = num % 10;

    // Find the first digit
    while (num >= 10) 
    {
        num /= 10;
    }
    first_digit = num;

    printf("First digit: %d\n", first_digit);
    printf("Last digit: %d\n", last_digit);

    return 0;
}
