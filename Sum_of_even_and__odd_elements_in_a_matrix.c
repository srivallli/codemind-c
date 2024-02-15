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
    int even=0,odd=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(mat[i][j]%2==0)
            {
            even+=mat[i][j];
            }
            else
            {
            odd+=mat[i][j];
            }
        }
    }
    printf("%d %d",even,odd);
}