#include<stdio.h>
int main()
{
    int m,n,gcd;
    scanf("%d%d",&m,&n);
    for(int i=1;i<=m&&i<=n;++i)
    {
        if(m%i==0&&n%i==0)
        {
            gcd=i;
        }
    }
    int lcm=(m*n)/gcd;
    printf("%d",lcm);
    
}