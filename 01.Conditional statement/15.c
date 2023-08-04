#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    switch (number % 2) 
    {
        case 0:
            printf("even number.\n");
            break;
        default:
            printf("odd number.\n");
    }

    return 0;
}
