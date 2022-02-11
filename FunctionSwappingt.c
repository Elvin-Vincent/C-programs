#include<stdio.h>
void swap(int x, int y)
{
    int t;
    t=x;
    x=y;
    y=t;
     printf("After swaping:");
    printf("\nFirst number = %d and Second number = %d",x,y);

    
}
int main()
{
    int a,b;
    printf("enter the numbers:");
    printf("\nFirst numbers=");
    scanf("%d",&a);
    printf("Second numbers=");
    scanf("%d",&b);
    swap(a,b);
      return 0;
}