//28. Write a C program to print a Fibonacci series.
#include <stdio.h>
int main() 
{
    int n, i, fib1 = 0, fib2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: %d, %d, ", fib1, fib2);

    for (i = 3; i <= n; i++) 
    {
        nextTerm = fib1 + fib2;
        printf("%d, ", nextTerm);
        fib1 = fib2;
        fib2 = nextTerm;
    }

    printf("\n");

    return 0;
}
