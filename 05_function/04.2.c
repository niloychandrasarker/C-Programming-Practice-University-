//4. Write a function that gets three integers and returns maximum.
#include <stdio.h>

int maximum(int a, int b, int c) 
{
    if (a > b && a > c) 
    {
        return a;
    } 
    else if (b > c && b > c) {
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

    int max_value = maximum(num1, num2, num3);

    printf("Maximum: %d\n", max_value);

    return 0;
}
