#include<stdio.h>
int main()
{
    int n,sqrt,rem,sum=0;
    scanf("%d",&n);
    sqrt=n*n;
    while(sqrt!=0)
    {
        rem=sqrt%10;
        sum=sum+rem;
        sqrt=sqrt/10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    
    }
    return 0;
}