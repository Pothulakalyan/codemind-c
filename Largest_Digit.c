#include<stdio.h>
int main()
{
    int n,b,max=0;
    scanf("%d",&n);
    while(n!=0)
    {
        b=n%10;
        n= n/10;
        if(b>max)
        {
            max=b;
           
        }
        
    }
    printf("%d",max);
}