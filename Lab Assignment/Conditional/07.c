//7. Write a C program to Check the character is alphabet, digit or special character.
#include <stdio.h>
int main() 
{
    char ch;
    
    printf("Enter a character: ");
    scanf(" %c", &ch);
    
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) 
    {
        printf("Character is an alphabet.\n");
    } 
    else if (ch >= '0' && ch <= '9') 
    {
        printf("Character is a digit.\n");
    } 
    else 
    {
        printf("Character is a special character.\n");
    }
    
    return 0;
}
