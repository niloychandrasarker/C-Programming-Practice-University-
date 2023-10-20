/*1.	Write a C program to create, declare and initialize structure.*/
#include <stdio.h>

struct Point 
{
    int x;
    int y;
    int z;
};

int main()
{
    struct Point p1 = {1, 2, 3};

    printf("Point coordinates: (%d, %d, %d)\n", p1.x, p1.y, p1.z);

    return 0;
}
