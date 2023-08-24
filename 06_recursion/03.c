//3. Write a program in C to count the digits of a given number using recursion
#include <stdio.h>

int countDigitsRecursive(int n) 
{
    if (n == 0)
    {
        return 0;
    } 
    else 
    {
        return 1 + countDigitsRecursive(n / 10);
    }
}

int main() 
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) 
    {
        printf("Please enter a positive integer.\n");
    } 
    else 
    {
        int result = countDigitsRecursive(num);
        printf("Number of digits in %d is %d\n", num, result);
    }

    return 0;
}
