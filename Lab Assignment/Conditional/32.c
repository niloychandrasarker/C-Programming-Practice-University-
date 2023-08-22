//32. 5 ways to check whether the given number is odd or even in C.
#include <stdio.h>
int main() 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Method 1: Using modulus operator
    if (num % 2 == 0) 
    {
        printf("Method 1: Even\n");
    } 
    else 
    {
        printf("Method 1: Odd\n");
    }

    // Method 2: Using bitwise AND operator
    if ((num & 1) == 0) 
    {
        printf("Method 2: Even\n");
    } 
    else 
    {
        printf("Method 2: Odd\n");
    }

    // Method 3: Using ternary operator
    (num % 2 == 0) ? printf("Method 3: Even\n") : printf("Method 3: Odd\n");

    // Method 4: Using switch statement
    switch (num % 2) {
        case 0:
            printf("Method 4: Even\n");
            break;
        case 1:
            printf("Method 4: Odd\n");
            break;
    }

    // Method 5: Using array indexing
    char *result[] = {"Even", "Odd"};
    printf("Method 5: %s\n", result[num % 2]);

    return 0;
}
