#include<stdio.h>
int main()
{
    int i,j,n,k=1;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            printf("%d ",k);
        }
        printf("
");
        k++;
    }
}
