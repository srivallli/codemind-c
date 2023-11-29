#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d=0;
    scanf("%f%f",&a,&b);
    for(int i=a;i<=b;i++)
    {
       c=sqrt(i);
       d=d+c;
    }
    printf("%0.2f",d);
}