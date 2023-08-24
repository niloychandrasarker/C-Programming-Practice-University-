//6. Write a program that two strings without case sensitivity
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    char str1[1000], str2[1000];
    
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    
    for (int i = 0; str1[i]; i++) 
    {
        str1[i] = tolower(str1[i]);
    }
    for (int i = 0; str2[i]; i++) 
    {
        str2[i] = tolower(str2[i]);
    }
   
    int result = strcmp(str1, str2);
    
    if (result == 0) 
    {
        printf("The strings are equal (case insensitive).\n");
    } 
    else 
    {
        printf("The strings are not equal (case insensitive).\n");
    }
    
    return 0;
}
