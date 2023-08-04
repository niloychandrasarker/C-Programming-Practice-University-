//C program to count frequency of digits in an integer
#include <stdio.h>
int main() 
{
    int num, digit;
    
    printf("Enter any number : ");
    scanf("%d", &num);
    
    int digitCount[10] = {0};

    while (num != 0) 
    {
        digit = num % 10;
        digitCount[digit]++;
        num /= 10;
    }

    printf("Frequency of digits:\n");
    for (digit = 0; digit < 10; digit++) 
    {
      printf("%d: %d times\n", digit, digitCount[digit]);
    }

    return 0;
}
