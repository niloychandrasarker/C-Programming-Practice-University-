/*2.	Write a C program to compare the contents of two files.*/
#include <stdio.h>

int main() 
{
    FILE *file1, *file2;
    char ch1, ch2;

    file1 = fopen("file1.txt", "r");
    file2 = fopen("file2.txt", "r");

    if (file1 == NULL || file2 == NULL) 
    {
        printf("Unable to open files for comparison.\n");
        return 1;
    }

    while ((ch1 = fgetc(file1)) != EOF && (ch2 = fgetc(file2)) != EOF) 
    {
        if (ch1 != ch2) 
        {
            printf("Files are not identical.\n");
            fclose(file1);
            fclose(file2);
            return 0;
        }
    }

    if (ch1 == EOF && ch2 == EOF) 
    {
        printf("Files are identical.\n");
    } 
    else 
    {
        printf("Files are not identical.\n");
    }

    fclose(file1);
    fclose(file2);

    return 0;
}
