//C program to find factor of a number
#include <stdio.h>
int main() 
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);
    for (int i = 1; i <= num; i++) 
    {
        if (num % i == 0) 
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
