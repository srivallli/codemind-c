#include<stdio.h>
int main()
{
    float n,sum=0,i;
    scanf("%f",&n);
    for( i=1;i<=n;i++)
    {
       sum=sum+(1/i); 
    }
    printf("%0.2f",sum);
}