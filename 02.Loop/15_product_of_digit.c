// C program to find Product of digits of a number
#include <stdio.h>
int main() 
{
    int num;

    printf("Enter any number : ");
    scanf("%d",&num);

    int digit;
    int product=1;
    while (num > 0) 
    {
        digit = num % 10;
        product *= digit;
        num /= 10;
    }
    
    printf("The product of the digits is: %d\n",product);

    return 0;
}