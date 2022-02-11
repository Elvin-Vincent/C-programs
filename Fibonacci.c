#include<stdio.h>
int main()
{
    int f=0,s=1,t,i,n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("%d%3d",f,s);
    for(i=0;i<=n;i++)
    {
        t= f+s;
        printf("%3d",t);
        f=s;
        s=t;
    }
    return 0;
}
