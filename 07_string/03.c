/*3. Write a program that read your name and display every character with one
space.*/
#include <stdio.h>
int main() 
{
    char name[100];
    printf("Enter your name: ");
    scanf("%s", name);

    for (int i = 0; name[i]; i++) 
    {
        printf("%c ", name[i]);
    }

    return 0;
}

