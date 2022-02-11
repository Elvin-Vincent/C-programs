#include<stdio.h>
int main()
{
    int n,r,i,s=0,c;
    printf("Enter the number:");
    scanf("%d",&n);
    c=n;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(s==c)
    {
        printf("%d is a palindrome",c);
    }
    else
    {
        printf("%d is not a palindrome",c);
    }
    return 0;
}
