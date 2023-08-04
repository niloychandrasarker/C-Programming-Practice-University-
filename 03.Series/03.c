// 1^2+2^2+3^2+........+n 

#include <stdio.h>
int main() 
{
    int n;
    int sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) 
    {
        sum+=i*i;
    }

    printf("Sum ::%d\n",sum);

    return 0;
}
