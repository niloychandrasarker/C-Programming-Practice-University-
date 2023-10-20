/*3.	Write a C program to copy number of bytes of from a specific offset to another file.*/
#include <stdio.h>

int main() 
{
    FILE *source, *destination;
    int offset, numBytes;
    char buffer[1000];

    // Open the source file
    source = fopen("source.txt", "rb");
    if (source == NULL) 
    {
        printf("Unable to open source file.\n");
        return 1;
    }

    // Open the destination file
    destination = fopen("destination.txt", "wb");
    if (destination == NULL) 
    {
        fclose(source);
        printf("Unable to open destination file.\n");
        return 1;
    }

    // Set the offset and number of bytes to copy
    offset = 100; // Example offset
    numBytes = 500; // Example number of bytes to copy

    // Set the file position to the specified offset
    fseek(source, offset, SEEK_SET);

    // Copy bytes from source to destination
    while (numBytes > 0) 
    {
        int bytesRead = fread(buffer, 1, sizeof(buffer), source);
        if (bytesRead == 0) 
        {
            break;
        }
        fwrite(buffer, 1, bytesRead, destination);
        numBytes -= bytesRead;
    }

    // Close the files
    fclose(source);
    fclose(destination);

    printf("Bytes copied successfully.\n");
    return 0;
}
