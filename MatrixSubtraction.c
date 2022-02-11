#include<stdio.h>
int main()
{
    int i,j,m,n,a[100][100],b[100][100],c[100][100];
    printf("Enter the number of rows:");
    scanf("%d",&m);
    printf("Enter the number of coloumns:");
    scanf("%d",&n);
    printf("Enter the elements for the 1st matrix:\n");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    printf("Enter the elements for the 2nd matrix:\n");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        scanf("%d",&b[i][j]);
    printf("The result  is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j]=a[i][j]-b[i][j];
            printf("%4d",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
