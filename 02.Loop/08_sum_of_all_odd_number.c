// Write a C program to find sum of all even numbers between 1 to n.
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int  sum=0;
    for(int i=1; i<=n; i+=2)
    {
        sum += i;
    }

    printf("Sum of Even numbers = %d",sum);

    return 0;
}