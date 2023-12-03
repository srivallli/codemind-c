#include<stdio.h>
int main()
{
    int n,rem=0,sum=0,product=1;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        product=product*rem;
        n=n/10;
    }
    if(sum==product)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}