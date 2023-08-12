// 10. Write a program that displays the first n Fibonacci numbers.
#include <stdio.h>
int main() 
{
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int fib[n]; 

    // First two Fibonacci numbers
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2; i < n; i++) 
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    printf("The first %d Fibonacci numbers are:\n", n);
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", fib[i]);
    }

    return 0;
}
