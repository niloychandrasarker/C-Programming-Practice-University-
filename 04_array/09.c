//9. Write a program that reads an array and displays a medium
#include <stdio.h>
int main() 
{
    int n;

    printf("Size : ");
    scanf("%d",&n);

    int array[n];

    printf("Array : ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d",&array[i]);
    }

    int medianIndex;

    if (n % 2 == 0) 
    {
        medianIndex = n / 2 - 1; 
    } 
    else 
    {
        medianIndex = n / 2; 
    }

   
    printf("The median index is: %d\n", medianIndex);
    printf("The median value is: %d\n", array[medianIndex]);

    return 0;
}
