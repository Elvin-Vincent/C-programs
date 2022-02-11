#include<stdio.h>
#include<string.h>
int main()
{
    char a[20];
    int i,n,c=0;
    printf("Enter the string:");
    scanf("%s",a);
    n=strlen(a);
    for(i=0;i<n/2;i++)
    {
      if(a[i]==a[n-i-1])
      c++;
    }
    if(i==c)
    {
        printf("%s is a palindrome",a);
    }
    else
    {
        printf("%s is not a palindrome",a);
    }
    return 0;
}
