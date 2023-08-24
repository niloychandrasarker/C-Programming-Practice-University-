//2. Write a recursive function that gets any positive integer and returns
#include <stdio.h>

unsigned long long factorial(int n) 
{
    if (n == 0 || n == 1) 
    {
        return 1;
    } 
    else 
    {
        return n * factorial(n - 1);
    }
}

int main() 
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) 
    {
        printf("Please enter a non-negative integer.\n");
    } 
    else 
    {
        unsigned long long result = factorial(n);
        printf("Factorial of %d is %llu\n", n, result);
    }

    return 0;
}
