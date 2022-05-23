#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b=sqrt(a);
    if (int(b*b)==a)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
    return 0;
}