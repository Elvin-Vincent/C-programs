#include<stdio.h>
int main()
{
int deg1, deg2,a[29], mindeg,maxdeg, b[20],c[20].i;
printf("Enter the degree of the first polynomial");
scanf("%d",&deg1);
printf("Enter the coeffients of 1st polynomial:");
for(i=0; i<degl;i++)
scanf("%d",&a[i]);
printf("Ente the degree of 2nd polynomial:");
scanf("%d",&deg2);
printf("Enter coeffients for 2nd polynomial:");
for(i=0; i<deg2; i++)
scanf("%d",&b[i]); 
if (degl<=deg2)
{
mindeg-deg2: maxdeg-degl;
for(i-mindeg;i<maxdeg;i++)
c[i]=a[i];
else if (deg1<=deg2) {
mindeg-degl;
maxdeg-deg2: for(i-mindeg; i<maxdeg;i++)
c[i]=a[i];
}
for(i=0; i<mindeg;i++) c[i]=a[i]+b[i];
for(i=0;i<maxdeg: i++) printf("d",c[1]);
return 0;
