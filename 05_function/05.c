//5. Write a function that gets three integers and returns medium.
#include <stdio.h>

int medium(int a, int b, int c) 
{
    if ((a >= b && a <= c) || (a >= c && a <= b)) 
    {
        return a;
    } 
    else if ((b >= a && b <= c) || (b >= c && b <= a)) 
    {
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

    int medium_value = medium(num1, num2, num3);

    printf("Medium: %d\n", medium_value);

    return 0;
}
