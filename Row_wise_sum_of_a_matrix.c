#include<stdio.h>
int main()
{
    int matrix[100][100];
    int i,j;
    scanf("%d%d",&i,&j);
    for(int a=0;a<i;a++)
    {
        int sum=0;
        for(int b=0;b<j;b++)
        {
            scanf("%d",&matrix[i][j]);
            sum=sum+matrix[i][j];
        }
         printf("%d ",sum);
    }
}
