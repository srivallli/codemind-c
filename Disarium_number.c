#include <stdio.h>
#include <math.h>
int countDigits(int num)
{
    int count = 0;
    while (num != 0)
    {
        num /= 10;
        count++;
    }
    return count;
}
int isDisarium(int num)
{
    int temp = num;
    int sum = 0;
    int digitCount = countDigits(num);
    while (temp != 0)
    {
        int digit = temp % 10;
        sum += pow(digit, digitCount);
        temp /= 10;
        digitCount--;
    }
    return (sum == num);
}
int main()
{
    int num;
    scanf("%d", &num);
    if (isDisarium(num))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}