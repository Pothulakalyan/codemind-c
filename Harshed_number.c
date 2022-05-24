#include<stdio.h>
int main()
{
    int n,sum=0,rem,a;
    scanf("%d",&n);
    a=n;
    while(n)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    if(a%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}