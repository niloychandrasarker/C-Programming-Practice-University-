#include <stdio.h>

// Function to calculate the factorial of a number
unsigned long long calculateFactorial(int *num) 
{
    unsigned long long factorial = 1;

    for (int i = 1; i <= *num; i++) 
    {
        factorial *= i;
    }
    return factorial;
}

int main() {
    int number;
    int *ptr = &number;
    scanf("%d", ptr);

    if (*ptr < 0) 
    {
        printf("Invalid input. Please enter a positive integer.\n");
    } 
    else 
    {
        unsigned long long factorial = calculateFactorial(ptr);
        printf("Factorial of %d is %llu\n", *ptr, factorial);
    }

    return 0;
}
