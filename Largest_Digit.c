#include<stdio.h>
int main()
{
    int a,n=0,b=0;
    scanf("%d",&a);
    while(a>0)
    {
        n=a%10;
        if(n>b)
        {
            b=n;
        }
        a=a/10;
        
    }
    printf("%d",b);
}