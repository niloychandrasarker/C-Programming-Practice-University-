//5. Write a C program to Check the character is alphabet or not.
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
    else 
    {
        printf("Character is not an alphabet.\n");
    }
    
    return 0;
}
