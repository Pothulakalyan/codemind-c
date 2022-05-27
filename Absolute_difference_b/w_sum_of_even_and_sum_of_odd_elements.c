#include<stdio.h>
#include<math.h>
int main()
{
    int ar[100],n,i,sum1=0,sum2=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]%2==0)
        {
            sum1=sum1+ar[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]%2!=0)
        {
            sum2=sum2+ar[i];
        }
    }
    printf("%d",abs(sum1-sum2));
}