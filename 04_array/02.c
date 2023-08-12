// 2. Write a program in C to copy the elements of one array into another array.
#include<stdio.h>
int main()
{
      int n;
      printf(" Size = ");
      scanf("%d",&n);
      int ar1[n],ar2[n];
      printf(" Array 1 = ");
      for(int i=0 ; i<n ; i++)
      {
            scanf("%d",&ar1[i]);
      }

       
      for(int i=0 ; i<n ; i++)
      {
            ar2[i]=ar1[i];
      }

        printf(" Array 2 = ");
      for(int i=0 ; i<n ; i++)
      {
            printf("%d",ar2[i]);
      }
            
      return 0;
}