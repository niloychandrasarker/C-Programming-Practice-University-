//5. Write a program that compare two strings.
#include <stdio.h>
#include <string.h>

int main() 
{
    char str1[1000], str2[1000];
    
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    
   
    
    
    int result = strcmp(str1, str2);
    
    if (result == 0)
    {
        printf("The strings are equal.\n");
    } 
    else 
    {
        printf("The strings are not equal.\n");
    }
    
    return 0;
}
