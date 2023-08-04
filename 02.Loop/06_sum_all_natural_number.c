//   C program to find sum of natural numbers between 1 to n
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int  sum=0;
    for(int i=1; i<=n; i++)
    {
        sum += i;
    }

    printf("Sum of natural numbers = %d",sum);

    return 0;
}