/*8.	Write a program that reads any integer and display positive, negative, or zero. */

#include <stdio.h>
int main() 
{
    int number;
    int *ptr = &number;

    scanf("%d", ptr);

    if (*ptr > 0) 
    {
        printf("Positive\n");
    } 
    else if (*ptr < 0) 
    {
        printf("Negative\n");
    } 
    else 
    {
        printf("Zero\n");
    }

    return 0;
}
