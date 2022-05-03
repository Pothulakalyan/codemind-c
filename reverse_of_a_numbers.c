#include<stdio.h>
int main()
{
    int n,i,r,sum=0;
    scanf("%d",&n);
    for(i=1;n!=0;i++)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    printf("%d",sum);
}