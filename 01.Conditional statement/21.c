#include <stdio.h>
int main() 
{
    float a,b,c;

    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == b && b == c) 
    {
        printf("The triangle is an Equilateral triangle.\n");
    } 
    else if (a == b || a == c || b == c) 
    {
        printf("The triangle is an Isosceles triangle.\n");
    } 
    else 
    {
        printf("The triangle is a Scalene triangle.\n");
    }

    return 0;
}
