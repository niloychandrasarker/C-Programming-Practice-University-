/*7. Write a program that read a line of text and display number of upper case, lower
case, digit, space, and other character.*/
#include <stdio.h>
int main() 
{
    char line[1000];
    printf("Enter a line of text: ");
    fgets(line, sizeof(line), stdin);

    int upper = 0, lower = 0, digit = 0, space = 0, other = 0;

    for (int i = 0; line[i]; i++) 
    {
        if (line[i] >= 'A' && line[i] <= 'Z') 
        {
            upper++; // Increment the count of uppercase letters
        } 
        else if (line[i] >= 'a' && line[i] <= 'z') 
        {
            lower++; // Increment the count of lowercase letters
        } 
        else if (line[i] >= '0' && line[i] <= '9') 
        {
            digit++; // Increment the count of digits
        } 
        else if (line[i] == ' ') 
        {
            space++; // Increment the count of spaces
        } 
        else 
        {
            other++; // Increment the count of other characters
        }
    }

    printf("Uppercase letters: %d\n", upper);
    printf("Lowercase letters: %d\n", lower);
    printf("Digits: %d\n", digit);
    printf("Spaces: %d\n", space);
    printf("Other characters: %d\n", other);

    return 0;
}


