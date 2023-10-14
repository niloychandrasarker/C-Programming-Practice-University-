/*3.	Write a program that reads and subtracts two numbers. */

#include <stdio.h>
int main() 
{
    int num1, num2;
    int *ptr1 = &num1, *ptr2 = &num2;
    scanf("%d %d", ptr1, ptr2);
    
    printf("Subtracts: %d\n", *ptr1 - *ptr2);

    return 0;
}
