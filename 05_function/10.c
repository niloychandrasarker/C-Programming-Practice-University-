/*10. Write a function that gets two positive integers and returns LCM (Least
Common Multiple).*/
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

int calculateLCM(int a, int b) 
{
    return (a * b) / calculateGCD(a, b);
}

int main()
 {
    int num1, num2;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 <= 0 || num2 <= 0) 
    {
        printf("Please enter positive integers.\n");
    } 
    else 
    {
        int lcm = calculateLCM(num1, num2);
        printf("LCM: %d\n", lcm);
    }

    return 0;
}
