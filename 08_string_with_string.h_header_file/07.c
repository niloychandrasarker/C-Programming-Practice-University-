//7. Write a program that read a line of text and display in lower case.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    char str[1000];
    
    printf("Enter a str of text: ");
    fgets(str, sizeof(str), stdin);
    
    for (int i = 0; str[i]; i++) 
    {
        str[i] = tolower(str[i]);
    }
    
    printf("Text in lower case: %s\n", str);
    
    return 0;
}
