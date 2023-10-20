/*6.	Write a C program to find the size of the union.*/
#include <stdio.h>

union SampleUnion 
{
    int integer;
    float floating;
    char character;
};

int main() 
{
    union SampleUnion u;
    
    printf("Size of the union: %lu bytes\n", sizeof(union SampleUnion));

    return 0;
}
