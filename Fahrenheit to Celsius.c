#include<stdio.h>
int main()
{
    float fahrenheit,celcius;
    scanf("%f",&celcius);
   celcius = ((celcius-32)*5)/9;
    printf("%.2f",celcius);
    return 0;
}