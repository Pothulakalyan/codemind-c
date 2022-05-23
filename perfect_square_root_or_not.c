#include<stdio.h>
#include<math.h>
int main()
{
    int m,n;
    scanf("%d",&m);
    n=sqrt(m);
    if(n*n==m)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
    
    
}