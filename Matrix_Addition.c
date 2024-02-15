#include<stdio.h>
int main()
{
    int mat1[10][10],mat2[10][10];
    int r,c,r2,c2;
    scanf("%d%d",&r,&c);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    scanf("%d%d",&r2,&c2);
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }
    int add[10][10];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
           add[i][j] = mat1[i][j]+mat2[i][j]; 
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",add[i][j]);
        }
        printf("
");
    }
    
}