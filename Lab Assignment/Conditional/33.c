//33. C program to multiply two numbers without using arithmetic operator.
#include <stdio.h>
int main() 
{
    int num1, num2, product = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    for (int i = 0; i < num2; i++) 
    {
        product += num1;
    }

    printf("Product: %d\n", product);

    return 0;
}
