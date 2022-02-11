#include<stdio.h>
int main()
{
    int a,b,t;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf( "BEFORE SWAPPING... \n");
    printf("first number = %d and second number = %d",a,b);
     t=a;
     a=b;
     b=t;
    printf("\nAFTER SWAPPING...\n");
    printf("first number = %d and second number = %d",a,b);
    return 0;
    
}
