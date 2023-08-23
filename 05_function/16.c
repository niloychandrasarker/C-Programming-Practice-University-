#include <stdio.h>
#include <limits.h>

int findMinimum(int arr[], int size) 
{
    int min_value = INT_MAX;

    for (int i = 0; i < size; ++i) 
    {
        if (arr[i] < min_value) 
        {
            min_value = arr[i];
        }
    }

    return min_value;
}

int main() 
{
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0) 
    {
        printf("Please enter a positive size.\n");
        return 1;
    }

    int arr[size];

    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; ++i) 
    {
        scanf("%d", &arr[i]);
    }

    int min_value = findMinimum(arr, size);

    printf("Minimum: %d\n", min_value);

    return 0;
}
