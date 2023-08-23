/*14. Write a function that gets any positive integer and determine prime or not
prime.*/
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) 
{
    if (n <= 1) 
    {
        return false;
    }
    
    for (int i = 2; i * i <= n; ++i) 
    {
        if (n % i == 0) 
        {
            return false;
        }
    }
    
    return true;
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
        if (isPrime(num)) 
        {
            printf("%d is a prime number.\n", num);
        } 
        else 
        {
            printf("%d is not a prime number.\n", num);
        }
    }

    return 0;
}
