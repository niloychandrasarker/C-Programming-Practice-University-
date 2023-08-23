//1. Write a function that gets two integers and returns division
#include <stdio.h>

float division(int a, int b) 
{
    if (b == 0) 
    {
        printf("Cannot divide\n");
        return 0;
    }
    return (float)a / b;
}

int main() 
{
    int num1, num2;
    
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    
    float result = division(num1, num2);
    
    printf("Division: %.2f\n", result);
    
    return 0;
}
