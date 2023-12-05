#include<stdio.h>
int main()
{
    int i,j,n,a,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            a=i+j,b=n;
            if(a <= b)
            {
            printf("*");
            }
            else
            {
                printf("%d",i);
            }
        }
        printf("
");
    }
}
