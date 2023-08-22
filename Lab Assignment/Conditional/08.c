//8. Write a C program to Check the character is in uppercase or lowercase.
#include <stdio.h>
int main() 
{
    char ch;
    
    printf("Enter a character: ");
    scanf(" %c", &ch);
    
    if (ch >= 'a' && ch <= 'z') 
    {
        printf("Character is in lowercase.\n");
    } 
    else if (ch >= 'A' && ch <= 'Z') 
    {
        printf("Character is in uppercase.\n");
    } 
    else 
    {
        printf("Invalid input.\n");
    }
    
    return 0;
}
