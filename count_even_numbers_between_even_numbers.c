#include<stdio.h>
int main()
{
    int n,ar[1000],count=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=1;i<n-1;i++)
    {
        if(ar[i]%2==0)
        {
            if(ar[i-1]%2==0 && ar[i+1]%2==0)
            {
                count++;
            }
        }
    }
    printf("%d",count);
}