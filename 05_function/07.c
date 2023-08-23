//7. Write a function that gets any positive integer and display its digital root.
#include <stdio.h>

int calculateDigitalRoot(int n) 
{
    while (n >= 10) 
    {
        int sum = 0;
        
        while (n > 0)
       {
            sum += n % 10;
            n /= 10;
        }
        
        n = sum;
    }
    
    return n;
}

int main() 
{
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    int digital_root = calculateDigitalRoot(num);
    printf("Digital Root: %d\n", digital_root);

    return 0;
}
