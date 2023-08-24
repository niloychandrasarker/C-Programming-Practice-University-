#include <stdio.h>

int main() 
{
    char str[1000];
    printf("Enter a str of text: ");
    fgets(str, sizeof(str), stdin);

    int characterFrequency[128] = {0}; 

    for (int i = 0; str[i]; i++) 
    {
        char c = str[i];
        characterFrequency[c]++; 
    }

    for (int i = 0; i < 128; i++) 
    {
        if (characterFrequency[i] > 0) 
        {
            printf("Frequency of '%c': %d\n", i, characterFrequency[i]);
        }
    }

    return 0;
}
