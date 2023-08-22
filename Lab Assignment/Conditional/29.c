//29. Write a C program to Check whether you are a 1 st year student of NITER CSE or not.
#include <stdio.h>
int main() 
{
    int year;
    
    printf("Enter your year of study: ");
    scanf("%d", &year);
    
    if (year == 1) 
    {
        printf("You are a 1st year student of NITER CSE.\n");
    } 
    else 
    {
        printf("You are not a 1st year student of NITER CSE.\n");
    }
    
    return 0;
}
