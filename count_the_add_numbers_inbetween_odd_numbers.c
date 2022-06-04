#include<stdio.h>
int main()
{
    int n,ar[1000],i,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=1;i<n;i++)
    {
        if(ar[i]%2==1)
        {
            if(ar[i-1]%2==1 && ar[i+1]%2==1)
            {
                count++;
            }
        }
    }
    printf("%d",count);
}