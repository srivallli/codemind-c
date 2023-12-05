#include<stdio.h>
int main()
{
    int i,j,n,a,b;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            a=i+j,b=n+1;
            if(a <= b)
            {
            printf("%d",j);
            }
            else
            {
                printf("*");
            }
        }
        printf("
");
    }
}
