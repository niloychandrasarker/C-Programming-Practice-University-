/*4.	Write a C – Convert All Characters in Upper Case of a File using C Program.*/
#include <stdio.h>
#include <ctype.h>

int main() 
{
    FILE *file;
    char ch;

    // Open the file for reading
    file = fopen("input.txt", "r");
    
    if (file == NULL) 
    {
        printf("File not found or could not be opened.\n");
        return 1;
    }

    // Open a new file for writing
    FILE *outputFile = fopen("output.txt", "w");
    
    if (outputFile == NULL) 
    {
        fclose(file);
        printf("Unable to create the output file.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) 
    {
        fputc(toupper(ch), outputFile);
    }

    fclose(file);
    fclose(outputFile);

    printf("File contents converted to upper case and saved to output.txt.\n");
    return 0;
}
