// Write a C program to count number of digits in a number.
#include <stdio.h>
int main() 
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    int count = 0;

    if (num == 0) 
    {
        count = 1; 
    } 
    else 
    {
        while (num != 0) 
        {
            num /= 10;
            count++;
        }
    }

    printf("The number of digits : %d\n", count);

    return 0;
}
