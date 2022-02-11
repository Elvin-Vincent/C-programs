#include<stdio.h>
int main()
{
    int r1,r2,c1,c2,i,j,k,mat1[20][20],mat2[20][20],res[20][20];
    printf("Enter the rows of 1st matrix:");
    scanf("%d",&r1);
    printf("Enter the coloums of 1st matrix:");
    scanf("%d",&c1);
    printf("Enter the rows of 2nd matrix:");
    scanf("%d",&r2);
    printf("Enter the coloums of 2nd matrix:");
    scanf("%d",&c2);
    if(c1==r2)
    {
        printf("Enter the elements for the 1st matrix:\n");
        for(i=0;i<r1;i++)
        for(j=0;j<c1;j++)
        scanf("%d",&mat1[i][j]);
        printf("Enter the elements for the 2nd matrix:\n");
        for(i=0;i<r2;i++)
        for(j=0;j<c2;j++)
        scanf("%d",&mat2[i][j]);
        for(i=0;i<r1;i++)
        for(j=0;j<c2;j++)
        {
            for(k=0;k<r2;k++)
            res[i][j]=res[i][j]+(mat1[i][k]*mat2[k][j]);
        }
        printf("THe resulting matrix is\n");
         for(i=0;i<r1;i++)
         {
         for(j=0;j<c2;j++)
         printf("%4d",res[i][j]);
         printf("\n");
        }
    }
    else
    printf("multiplication doesnot exist");
    return 0;
}
