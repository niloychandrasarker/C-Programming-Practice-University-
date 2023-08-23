//8. Write a function that gets any positive integer and returns its reverse.
#include <stdio.h>

int reverseInteger(int n) 
{
    int reversed = 0;

    while (n > 0) 
    {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    return reversed;
}

int main() 
{
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) 
    {
        printf("Please enter a positive integer.\n");
    } 
    else 
    {
        int reversed_num = reverseInteger(num);
        printf("Reversed Integer: %d\n", reversed_num);
    }

    return 0;
}
