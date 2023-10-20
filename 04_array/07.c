//7. Write a program that displays first n prime numbers.
#include <stdio.h>
int main() 
{
    int n;

   
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int primes[n]; 
    int count = 0; 
    int num = 2;   

    while (count < n) 
    {
        int flag = 1; 

        for (int i = 2; i <= num / 2; i++) 
        {
            if (num % i == 0) 
            {
                flag = 0; 
                break;
            }
        }

        if (flag==1) 
        {
            primes[count] = num;
            count++;
        }
        num++;
    }

    printf("The first %d prime numbers are:\n", n);
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", primes[i]);
    }

    return 0;
}
