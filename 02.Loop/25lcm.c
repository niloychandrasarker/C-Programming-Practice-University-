//Write a C program to find LCM of two numbers.

#include <stdio.h>
int main()
{
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    int n1=num1;
    int n2=num2;

    while (n2 != 0) 
    {
        int rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }
    int gcd = n1;
    int lcm = (num1+num2)/gcd;

   
    printf("GCD :: %d\n",lcm);

    return 0;
}