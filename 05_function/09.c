/*9. Write a function that gets two integer and returns GCD (greatest common
divisor)*/
#include <stdio.h>

int calculateGCD(int a, int b) 
{
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() 
{
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    int gcd = calculateGCD(num1, num2);

    printf("GCD: %d\n", gcd);

    return 0;
}
