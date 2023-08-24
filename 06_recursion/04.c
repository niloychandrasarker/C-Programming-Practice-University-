//4. Write a program in C to find the GCD of two numbers using recursion
#include <stdio.h>

int gcdRecursive(int a, int b) 
{
    if (b == 0) 
    {
        return a;
    }
    else 
    {
        return gcdRecursive(b, a % b);
    }
}

int main() 
{
    int num1, num2;
    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 <= 0 || num2 <= 0) 
    {
        printf("Please enter two positive integers.\n");
    } 
    else 
    {
        int result = gcdRecursive(num1, num2);
        printf("GCD of %d and %d is %d\n", num1, num2, result);
    }

    return 0;
}
