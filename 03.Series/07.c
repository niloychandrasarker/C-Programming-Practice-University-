// 1*2*3 + 2*3*4 + 3*4*5 +........+n 

#include <stdio.h>
int main() 
{
    int n;
    int sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) 
    {
        sum+=i*(i+1)*(i+2);
    }

    printf("Sum ::%d\n",sum);

    return 0;
}
