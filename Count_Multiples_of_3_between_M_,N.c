#include<stdio.h>
int main()
{
    int m,n,count=0;
    scanf("%d%d",&m,&n);
    for(int i=m;i<n;i++)
    {
        if(i%3==0)
        count++;
    }
    printf("%d",count);
}