#include<stdio.h>
int main()
{
    int ar[1000],n,i,search,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
     if(search==ar[i])
     {
        printf("True");
        c=1;
        break;
     }
    }
    if(c==0)
    {
        printf("False");
    }
}