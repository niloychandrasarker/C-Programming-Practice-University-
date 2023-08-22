//31. C program display odd and even numbers without if statements.
#include <stdio.h>
int main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    (num & 1) ? printf("Odd\n") : printf("Even\n");

    return 0;
}
