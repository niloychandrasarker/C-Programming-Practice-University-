//6. Write a function that gets any positive integer and display its digital sum.
#include <stdio.h>

int calculateDigitalSum(int n) 
{
    int sum = 0;
    
    while (n > 0) 
    {
        sum += n % 10;
        n /= 10;
    }
    
    return sum;
}

int main() 
{
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) 
    {
        printf("Please enter a positive integer.\n");
    } 
    else 
    {
        int digital_sum = calculateDigitalSum(num);
        printf("Digital Sum: %d\n", digital_sum);
    }

    return 0;
}
