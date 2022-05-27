#include<stdio.h>
int main()
{
    int ar[100],n,i,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]%2==0 ||ar[i]%2!=0)
        {
            sum=sum+ar[i];
        }
    }
    printf("%d",sum);
}