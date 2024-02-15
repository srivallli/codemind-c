#include<stdio.h>
void elementsearch(int mat[1005][1005],int r,int c,int n)
{
    int s=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0 ; j<c;j++)
        {
            if(n==mat[i][j])
            {
            printf("1");
            s++;
            }
        }
    }
    if(s==0)
    {
        printf("0");
    }
}
int main()
{
    int MAT[1005][1005];
    int R,C,x;
    scanf("%d%d",&R,&C);
    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            scanf("%d ",&MAT[i][j]);
        }
    }
    scanf("%d",&x);
    elementsearch(MAT,R,C,x);
}