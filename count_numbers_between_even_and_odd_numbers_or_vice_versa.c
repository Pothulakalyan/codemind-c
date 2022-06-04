#include<stdio.h>
int main()
{
    int n,ar[1000],i,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=1;i<n-1;i++)
    {
        if(ar[i-1]%2!=0 && ar[i+1]%2==0)
        {
            count++;
        }
        if(ar[i-1]%2==0 && ar[i+1]%2!=0)
        {
            count++;
        }
    }
    printf("%d",count);
       
}