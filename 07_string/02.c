//2. Write a program that convert a line to lower case.
//1. Write a program that convert a str to upper case.
#include <stdio.h>
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

    printf("Uppercase: %s", str);

    return 0;
}
