#include<stdio.h>
int main()
{
    int mat[100][100];
    int r,c;
    scanf("%d%d",&r,&c);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d ",&mat[i][j]);
        }
    }
    
    for(int i=0;i<c;i++)
    {
        int sum=0;
        for(int j=0;j<r;j++)
        {
            sum+=mat[j][i];
        }
        printf("%d ",sum);
    }
}