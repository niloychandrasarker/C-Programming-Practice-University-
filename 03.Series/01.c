//1*2+2*3+3*4+...........up  to n term
#include <stdio.h>
int main() 
{
    int n;
    int sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) 
    {
        sum += i * (i + 1);
    }

    printf("Sum ::%d\n",sum);

    return 0;
}
