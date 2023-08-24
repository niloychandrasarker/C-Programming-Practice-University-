//2. Write a program that read a str of text and displays in reverse order.
#include <stdio.h>
#include <string.h>

int main() 
{
    char str[1000];
    
    printf("Enter a str of text: ");
    fgets(str, sizeof(str), stdin);
    
    printf("Text in reverse order: ");
    for (int i = strlen(str) - 1; i >= 0; i--) 
    {
        printf("%c", str[i]);
    }
    printf("\n");
    
    return 0;
}
