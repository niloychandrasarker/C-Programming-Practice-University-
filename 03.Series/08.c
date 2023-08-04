// 1*3*5*7 + 3*5*7*9 + 5*7*9*11 +........+n 

#include <stdio.h>
int main() 
{
    int n;
    int sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i+=2) 
    {
        sum+=i*(i+2)*(i+4)*(i+6);
    }

    printf("Sum ::%d\n",sum);

    return 0;
}
