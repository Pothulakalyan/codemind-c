#include<stdio.h>
int main()
{
    int n,i,temp,rev=0,r;
    scanf("%d",&n);
    int m = n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(rev==m)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}