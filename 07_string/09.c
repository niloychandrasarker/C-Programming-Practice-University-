/*9. Write a program that read a line of text and display the frequency of every
letter*/
#include <stdio.h>
#include <ctype.h>
int main() 
{
    char line[1000];
    printf("Enter a line of text: ");
    fgets(line, sizeof(line), stdin);

    int letterFrequency[26] = {0}; 

    for (int i = 0; line[i]; i++) 
    {
        char c = tolower(line[i]); 
        if (c >= 'a' && c <= 'z') 
        {
            letterFrequency[c - 'a']++; 
        }
    }

    for (int i = 0; i < 26; i++) 
    {
        if (letterFrequency[i] > 0) 
        {
            printf("Frequency of %c: %d\n", i + 'a', letterFrequency[i]);
        }
    }

    return 0;
}
