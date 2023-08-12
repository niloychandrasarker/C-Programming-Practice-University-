#include<stdio.h>
int main()
{
      int n;
      printf("Enter Number of entries of table :: ");
      scanf("%d",&n);

      for(int i=1 ; i<=n ; i++)
      {
            printf("%d          %d\n",i,i*i);
      }


      return 0;
}