/*5.	Write a C program to extract individual bytes from an unsigned int using union.*/
#include <stdio.h>

union ByteExtractor 
{
    unsigned int value;
    unsigned char bytes[4];
};

int main() 
{
    union ByteExtractor extractor;
    
    printf("Enter an unsigned int: ");
    scanf("%u", &extractor.value);
    
    printf("Individual bytes of %u are: ", extractor.value);
    for (int i = 0; i < 4; i++) 
    {
        printf("%02X ", extractor.bytes[i]);
    }
    printf("\n");

    return 0;
}
