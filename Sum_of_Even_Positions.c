#include<stdio.h>
int main()
{
    int ar[100],n,i,even_sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            even_sum=even_sum+ar[i];
        }
    }
    printf("%d",even_sum);
}