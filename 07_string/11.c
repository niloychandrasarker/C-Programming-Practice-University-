//11. Write a program that read and display an array of string.
#include <stdio.h>

int main() 
{
    int n;

    printf("Enter the number of strings: ");
    scanf("%d", &n);

    // Clear the newline character from the input buffer
    getchar();

    char strings[n][100]; // Assuming each string has a maximum length of 100

    for (int i = 0; i < n; i++) 
    {
        printf("Enter string %d: ", i + 1);
        fgets(strings[i], sizeof(strings[i]), stdin);
      
    }

    printf("\nEntered strings:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d: %s\n", i + 1, strings[i]);
    }

    return 0;
}
