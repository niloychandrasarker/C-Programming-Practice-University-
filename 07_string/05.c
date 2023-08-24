/*5. Write a program that read any line of text and display every character in a
separate line.*/
#include <stdio.h>
int main()
{
    char line[1000];
    printf("Enter a line of text: ");
    fgets(line, sizeof(line), stdin);

    for (int i = 0; line[i]; i++) 
    {
        if (line[i] != '\n') 
        {
            printf("%c\n", line[i]);
        }
    }

    return 0;
}
