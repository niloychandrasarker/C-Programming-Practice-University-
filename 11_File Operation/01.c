/*1.	Write a C program to create, open and close a file.*/
#include <stdio.h>

int main() 
{
    FILE *file;

    // Create a new file
    file = fopen("example.txt", "w");
    
    if (file == NULL) 
    {
        printf("File creation failed.\n");
        return 1;
    }

    // Write data to the file
    fprintf(file, "Hello, World!\n");

    // Close the file
    fclose(file);

    printf("File created and closed successfully.\n");
    return 0;
}
