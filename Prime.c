#include<stdio.h>
int main()
{
    int n,i,s=1;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=2; i<=n/2;i++)
    {
        if(n%i == 0)
        {
        s=0;
        }
    }
    if(s==1)
    printf("%d is a prime number",n);
    else
    printf("%d is not a prime number",n);
    return 0;
}
