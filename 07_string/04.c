/*4. Write a program that read your name and display every character with one space
in reverse order.*/
#include <stdio.h>
#include <string.h>
int main() 
{
    char name[100];
    printf("Enter your name: ");
    scanf("%s", name);

    for (int i = strlen(name) - 1; i >= 0; i--) 
    {
        printf("%c ", name[i]);
    }

    return 0;
}
