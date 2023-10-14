/* C Program to Find Largest Number Using Dynamic Memory Allocation:*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d", &n);

    if (n <= 0) 
    {
        printf("Invalid input.\n");
        return 1;
    }

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) 
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] > max) 
        {
            max = arr[i];
        }
    }

    printf("The largest number is: %d\n", max);

    free(arr);
    return 0;
}
