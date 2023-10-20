/*5.	Write a program that read first n numbers in a file and display in another file.*/
#include <stdio.h>

int main() 
{
    FILE *inputFile, *outputFile;
    int n, num;

    // Open the input file
    inputFile = fopen("Data.txt", "r");
    if (inputFile == NULL) 
    {
        printf("Unable to open the input file.\n");
        return 1;
    }

    // Open the output file
    outputFile = fopen("Output.txt", "w");
    if (outputFile == NULL) 
    {
        fclose(inputFile);
        printf("Unable to create the output file.\n");
        return 1;
    }

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Read and write the first n numbers
    for (int i = 0; i < n; i++) 
    {
        fscanf(inputFile, "%d", &num);
        fprintf(outputFile, "%d\n", num);
    }

    // Close the files
    fclose(inputFile);
    fclose(outputFile);

    printf("First %d numbers written to Output.txt.\n", n);

    return 0;
}
