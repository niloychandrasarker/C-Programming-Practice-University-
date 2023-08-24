/*1. Write a program in C to calculate the sum of numbers from 1 to n using
recursion*/
#include <stdio.h>

int sumRecursive(int n) 
{
    if (n == 1) 
    {
        return 1;
    } 
    else 
    {
        return n + sumRecursive(n - 1);
    }
}

int main() 
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive integer.\n");
    } 
    else 
    {
        int result = sumRecursive(n);
        printf("Sum of numbers from 1 to %d is %d\n", n, result);
    }

    return 0;
}
