//2. Write a function that gets two integers and returns Minimum
#include <stdio.h>

int findMinimum(int a, int b) 
{
    if (a < b) 
    {
        return a;
    } 
    else 
    {
        return b;
    }
}

int main() 
{
    int num1, num2;
    
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    
    int min_value = findMinimum(num1, num2);
    
    printf("Minimum: %d\n", min_value);
    
    return 0;
}
