#include<stdio.h>
int main()
{
    int num,fac=1;
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
       fac=fac*i; 
    }
    printf("%d",fac);
}