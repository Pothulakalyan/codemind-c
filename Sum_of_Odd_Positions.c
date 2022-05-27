#include<stdio.h>
int main()
{
    int ar[100],n,odd_sum=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            odd_sum=odd_sum+ar[i];
        }
    }
    printf("%d",odd_sum);
}