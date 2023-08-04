// C program to find sum of digits of a number
#include <stdio.h>
int main() 
{
    int num;

    printf("Enter any number : ");
    scanf("%d",&num);

    int digit;
    int sum=0;
    while (num > 0) 
    {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }
    
    printf("The sum of the digits is: %d\n",sum);

    return 0;
}