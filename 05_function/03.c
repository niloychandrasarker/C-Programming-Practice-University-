//3. Write a function that gets three integers and returns maximum.
#include <stdio.h>

int findMaximum(int a, int b) 
{
    if (a < b) 
    {
        return b;
    } 
    else 
    {
        return a;
    }
}

int main() 
{
    int num1, num2;
    
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    
    int max_value = findMaximum(num1, num2);
    
    printf("Maxmum: %d\n", max_value);
    
    return 0;
}