#include<stdio.h>
int main()
{
    int n,c=0,d=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
       d=d+i;
       c=c+i*i;
    }
    printf("%d",d*d-c);
}