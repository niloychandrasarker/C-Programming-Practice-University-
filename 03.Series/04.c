// 1*1^2+2*3^2+3*5^2+........+n 

#include <stdio.h>
int main() 
{
    int n;
    int sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1,j=1; i <= n; i++,j+=2) 
    {
        sum+=i*j*j;
    }

    printf("Sum ::%d\n",sum);

    return 0;
}
