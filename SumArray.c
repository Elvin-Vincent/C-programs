#include<stdio.h>
int main()
{
    int a[100],b[100],c[100],n,i;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("\nEnter the elements of 1st array:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements of 2nd array:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    printf ("The sum of these 2 array is:");
    for(i=0;i<n;i++)
    {
        c[i]=a[i]+b[i];
        printf("%d\t",c[i]);
    }
    return 0;
}
