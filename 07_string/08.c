/*8. Write a program that read a line of text and display the number of vowel,
consonant, digit, space and other characters.*/
#include <stdio.h>
#include <ctype.h>

int main() 
{
    char line[1000];
    printf("Enter a line of text: ");
    fgets(line, sizeof(line), stdin);

    int vowels = 0, consonants = 0, digits = 0, spaces = 0, others = 0;

    for (int i = 0; line[i]; i++) 
    {
        char c = tolower(line[i]); 
        if (c >= 'a' && c <= 'z') 
        {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') 
            {
                vowels++;
            } 
            else 
            {
                consonants++;
            }
        } 
        else if (isdigit(line[i])) 
        {
            digits++;
        } 
        else if (line[i] == ' ' || line[i] == '\t') 
        {
            spaces++;
        } 
        else if (line[i] == '\n') 
        {
            // Ignore newlines, 
        } 
        else 
        {
            others++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Spaces: %d\n", spaces);
    printf("Other characters: %d\n", others);

    return 0;
}
