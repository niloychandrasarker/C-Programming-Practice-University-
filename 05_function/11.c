/*11. Write a function that gets two positive integers(a,b) and returns a to the
power b.*/
#include <stdio.h>

int calculatePower(int base, int exponent) 
{
    int result = 1;
    
    for (int i = 0; i < exponent; ++i) 
    {
        result *= base;
    }
    
    return result;
}

int main() 
{
    int base, exponent;

    printf("Enter a positive base: ");
    scanf("%d", &base);

    printf("Enter a positive exponent: ");
    scanf("%d", &exponent);

    if (base <= 0 || exponent < 0) 
    {
        printf("Please enter a positive base and a positive exponent.\n");
    } 
    else 
    {
        int power = calculatePower(base, exponent);
        printf("%d to the power of %d: %d\n", base, exponent, power);
    }

    return 0;
}
