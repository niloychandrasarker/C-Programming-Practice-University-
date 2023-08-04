#include <stdio.h>
int main() 
{
    float a,b,c;

    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if ((a + b > c) && (b + c > a) && (c + a > b)) 
    {
        printf("The triangle is valid.\n");
    } 
    else 
    {
        printf("The triangle is not valid.\n");
    }

    return 0;
}
