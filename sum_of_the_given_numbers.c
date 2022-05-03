#include<stdio.h>
int main()
{
    int i,j,row,colon,a[10][10],sum;
    scanf("%d",&i);
    for(row=0;row<i;row++)
    {
        for(colon=0;colon<2;colon++)
        {
            scanf("%d",&a[row][colon]);
        }
    }
    for(row=0;row<i;row++)
    {
        sum=0;
        for(colon=0;colon<2;colon++)
        {
            sum=sum+a[row][colon];
        }
        printf("%d
",sum);
    }
    return 0;
    
}