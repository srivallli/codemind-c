#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%s", str);
    int len=strlen(str);
    for(int i =0 ;i<len;i++)
    {
        if(str[i]!=str[len-1])
        {
            printf("Not Palindrome");
            return 0;
        }
        len--;
    }
    printf("Palindrome");
    
}