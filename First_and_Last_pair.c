#include<stdio.h>
int main()
{
    int arr[100],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int num=n;
   for(int i=0;i<n/2;i++)
   {
    printf("%d %d ",arr[i],arr[num-1]);
    num--;
   }
   if(n%2!=0)
   {
       printf("%d ",arr[(n-1)/2]);
       printf("0");
   }
}