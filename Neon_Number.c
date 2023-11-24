#include <stdio.h>
int isNeon(int num)
{
    int square = num * num;
    int sum = 0;
    while (square != 0) 
	{
        sum += square % 10;
        square /= 10;
    }
    return (sum == num);
}

int main() 
{
    int num;
    scanf("%d", &num);
    if (isNeon(num)) 
	{
        printf("Neon Number");
    }
	else
	{
        printf("Not Neon Number");
    }

    return 0;
}