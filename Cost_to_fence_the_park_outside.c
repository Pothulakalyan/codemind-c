#include<stdio.h>
int main()
{
    int l,b,w,ll,bl,f,c;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    ll=l+2*w;
    bl=b+2*w;
    f=((ll*bl)-(l*b))*c;
    printf("%d",f);
}