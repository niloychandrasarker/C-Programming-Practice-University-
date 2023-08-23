//4. Write a function that gets three integers and returns minimum.
#include <stdio.h>

int minimum(int a, int b, int c) 
{
    if (a < b && a < c) 
    {
        return a;
    } 
    else if (b < c && b < c) {
        return b;
    } 
    else 
    {
        return c;
    }
}

int main() 
{
    int num1, num2, num3;

    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int min_value = minimum(num1, num2, num3);

    printf("Minimum: %d\n", min_value);

    return 0;
}
