#include<stdio.h>
int main()
{
    int n,c,r,s=0;
    printf("Enter the number:");
    scanf("%d",&n);
    c=n;
    while(n!=0)
    {
        r=n%10;
        s=s+(r*r*r);
        n=n/10;
    }
    if(s==c)
    printf("%d is a armstrome number",c);
    else
    printf("%d is not a armstrong number",c);
    return 0;
}
