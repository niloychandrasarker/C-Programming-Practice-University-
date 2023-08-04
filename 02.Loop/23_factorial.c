//C program to find factorial of a number
#include <stdio.h>
int main() 
{
    int num;
    unsigned long long fact = 1;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0) 
    {
        printf("factorial no available.\n");
    } 
    else 
    {
        for (int i = 1; i <= num; i++) 
        {
            fact *= i;
        }

        printf("factorial of %d is: %llu\n", num, fact);
    }

    return 0;
}
