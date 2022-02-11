#include<stdio.h>
int main()
{
    int r,n,s=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    printf("The reverse of number is=%d",s);
    return 0;
}
