#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000],cpy[1000];
    scanf("%[^
]", str);
    strcpy(cpy, str);
    printf("%s
", cpy);
}