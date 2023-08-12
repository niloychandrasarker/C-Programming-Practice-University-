#include<stdio.h>
int main()
{
      int n;
      printf("Enter Number of entries of table :: ");
      scanf("%d",&n);
      int digit_count=0;
      do
      {
            n/=10;
            digit_count++;   
      }
      while(n != 0);
      
      printf("%d",digit_count);

      return 0;
}