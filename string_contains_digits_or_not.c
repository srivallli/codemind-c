#include<stdio.h>
#include<string.h>
int main()
{
    int c;
    scanf("%d",&c);
    while(c>0)
    {
        char str[100];
        int s=0;
        scanf("%s",&str);
        for(int i=0;i<strlen(str);i++)
        {
            if(str[i]>='0' && str[i]<='9')
            {
                s++;
            }
        }
        if(s>0)
        {
            printf("Yes
");
        }
        else
        {
            printf("No
");
        }
        c--;
    }
}