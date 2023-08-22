//17. Write a C program to Check whether a number is a prime number or not
#include <stdio.h>
int main() 
{
    int num, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) 
    {
        isPrime = 0; // Not a prime number
    }
     else 
     {
        for (int i = 2; i * i <= num; i++) 
        {
            if (num % i == 0) 
            {
                isPrime = 0; // Not a prime number
                break;
            }
        }
    }

    if (isPrime==1) 
    {
        printf("%d is a prime number.\n", num);
    } 
    else 
    {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
