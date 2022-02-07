#include<stdio.h>
int main()
{
    float a,sum=0,i;
    scanf("%f",&a);
    for(i=1;i<=a;i++)
    {
        sum = sum + 1/i;
    }
    printf("%.2f",sum);
    return 0;
}