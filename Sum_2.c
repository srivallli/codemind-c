#include<stdio.h>
int main()
{
    int a,b,x,y,count=0;
    scanf("%d%d%d%d",&a,&b,&x,&y);
    for(int i=a;i<=b;i++)
    {
        if(i%x==0&&i%y!=0)
        {
            count=count+i;
        }
    }
        printf("%d",count);
}