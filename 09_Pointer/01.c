/*1.	Write a program that reads and displays any number. */

#include <stdio.h>
int main() 
{
    int number;
    int *ptr = &number;
    scanf("%d", ptr);
    
    printf("%d\n", *ptr);

    return 0;
}
