//34. C program to add two numbers without using arithmetic operators.
#include <stdio.h>
int main() 
{
    int num1, num2, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    while (num2 != 0) 
    {
        sum = num1 & num2;
        num1 = num1 ^ num2;
        num2 = sum << 1;
    }

    printf("Sum: %d\n", num1);

    return 0;
}
