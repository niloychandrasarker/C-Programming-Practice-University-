/*7.	Write a program that read all numbers in a file and write another file in descending order.*/
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) 
{
    return (*(int *)b - *(int *)a);
}

int main() 
{
    FILE *inputFile, *outputFile;
    int num, count = 0;
    int numbers[1000]; // Assuming a maximum of 1000 numbers

    // Open the input file
    inputFile = fopen("Data.txt", "r");
    if (inputFile == NULL) 
    {
        printf("Unable to open the input file.\n");
        return 1;
    }

    // Read numbers from the input file
    while (fscanf(inputFile, "%d", &num) != EOF) 
    {
        numbers[count++] = num;
    }

    // Close the input file
    fclose(inputFile);

    // Sort the numbers in descending order
    qsort(numbers, count, sizeof(int), compare);

    // Open the output file
    outputFile = fopen("Descending.txt", "w");
    if (outputFile == NULL) 
    {
        printf("Unable to create the output file.\n");
        return 1;
    }

    // Write the numbers in descending order to the output file
    for (int i = 0; i < count; i++) 
    {
        fprintf(outputFile, "%d\n", numbers[i]);
    }

    // Close the output file
    fclose(outputFile);

    printf("Numbers written in descending order to Descending.txt.\n");

    return 0;
}
