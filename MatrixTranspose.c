#include<stdio.h>
int main()
{
    int m,n,i,j,a[100][100];
    printf("Enter the number of rows:");
    scanf("%d",&m);
    printf("Enter the number of coloumns:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    printf("The transpose of the matrix is:\n");
    for(i=0;i<n;i++)
    {
    for(j=0;j<m;j++)
   printf("%4d",a[j][i]);
    printf("\n");
    }
    return 0;
}

