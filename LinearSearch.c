#include<stdio.h>
int main()
{
    int a[100],i,n,item,f=0;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the item to be searched:");
    scanf("%d",&item);
    for(i=0;i<n;i++)
    {
        if(item==a[i])
        {
            printf("The item %d found on the location %d",item,i+1);
            f=1;
            break;
        }
    }
    if(f==0)
    printf("The item %d is not in the list",item);
    
}

