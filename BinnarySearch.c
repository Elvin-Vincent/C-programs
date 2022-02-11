#include<stdio.h>
int main()
{
    int first,last,i,middle,n,item,a[20];
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter the elements in ascending order:\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the item to be searched:");
    scanf("%d",&item);
    first=0;
    last=n-1;
    middle=(first+last)/2;
    while(first<=last)
    {
        if(item<a[middle])
        last=middle-1;
        else if(a[middle]==item)
        {
        printf("%d found at the location %d",item,middle+1);
        break;
        }
        else if(item>a[middle])
        first=middle+1;
        middle=(first+last)/2;
    }
    if(last<first)
    printf("Element not found");
    return 0;
}
