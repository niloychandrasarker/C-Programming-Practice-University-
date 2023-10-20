//15. Write a function that gets an array and returns average.
#include <stdio.h>

double calculateAverage(int arr[], int size) 
{
    int sum = 0;
    
    for (int i = 0; i < size; ++i) 
    {
        sum += arr[i];
    }
    
    return (double)sum / size;
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

    double average = calculateAverage(arr, size);
    printf("Average: %.2f\n", average);

    return 0;
}
