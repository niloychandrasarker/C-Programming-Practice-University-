/*3. Write a C program to Check every possible requirement that you are allowed to drive a
car in the road or not.*/ 
#include <stdio.h>
int main() 
{
    int age;
    char license;
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("Do you have a driving license? (Y/N): ");
    scanf(" %c", &license);
    
    if (age >= 18 && license == 'Y') 
    {
        printf("You are allowed to drive a car.\n");
    } 
    else 
    {
        printf("You are not allowed to drive a car.\n");
    }
    
    return 0;
}
