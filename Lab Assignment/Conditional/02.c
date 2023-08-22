//2. Write a C program to Check the Number equal to 0 or less than 0 or greater than 0.
#include <stdio.h>
int main() 
{
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num == 0) 
    {
        printf("Number is equal to 0.\n");
    } 
    else if (num < 0) 
    {
        printf("Number is less than 0.\n");
    } 
    else 
    {
        printf("Number is greater than 0.\n");
    }
    
    return 0;
}
