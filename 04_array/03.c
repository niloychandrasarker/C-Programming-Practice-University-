// 3.Write a program that reads and displays minimum.

#include<stdio.h>
int main()
{
      int n;
      printf(" Size = ");
      scanf("%d",&n);
      int ar[n];
      printf(" Array  = ");
      for(int i=0 ; i<n ; i++)
      {
            scanf("%d",&ar[i]);
      }

       int min=ar[0];
      for(int i=0 ; i<n ; i++)
      {
           if(ar[i] < min)
           {
            min=ar[i];
           }
      }

        printf(" MINMUN = %d",min);
      
            
      return 0;
}