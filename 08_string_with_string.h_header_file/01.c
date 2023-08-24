//1. Write a program that read a line of text and display its length.
#include <stdio.h>
#include <string.h>

int main() 
{
    char str[1000];
    
    printf("Enter a str of text: ");
    fgets(str, sizeof(str), stdin);
    
    printf("Length of the text: %zu\n", strlen(str));
    
    return 0;
}
