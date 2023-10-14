/*7.	Write a program that reads two string and display maximum. */

#include <stdio.h>
#include <string.h>
int main() 
{
    char str1[100], str2[100];
    char *ptr1 = str1, *ptr2 = str2;

    printf("Enter two strings: ");
    scanf("%s %s", ptr1, ptr2);

    int comparison = strcmp(ptr1, ptr2);
    
    if (comparison > 0) 
    {
        printf("Maximum: %s\n", ptr1);
    } 
    else if (comparison < 0) 
    {
        printf("Maximum: %s\n", ptr2);
    } 
    else 
    {
        printf("The two strings are equal.\n");
    }

    return 0;
}
