//2*1+5*3+8*5+...........up  to n term
#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    int factor = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 2 ,j=1; i <= n; i+=3,j+=2) 
    {
        sum += i*j;
      
    }

    printf("Sum :: %d\n",sum);

    return 0;
}
