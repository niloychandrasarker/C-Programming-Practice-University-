
#include<stdio.h>
int main()
{
    int marks;
    printf("Enter your marks ");
    scanf("%d",&marks);
    if(marks<0 || marks>100)
    {
        printf("invalid mark");
    }
    else if(marks<50)
    {
        printf("F");
    }
    else if(marks>=50 && marks<60)
    {
        printf("D");
    }
    else if(marks>=60 && marks<70)
    {
        printf("C");
    }
    else if(marks>=70 && marks<80)
    {
        printf("B");
    }
    else if(marks>=80 && marks<90)
    {
        printf("A");
    }
    else
    {
        printf("A+");
    }
}
		