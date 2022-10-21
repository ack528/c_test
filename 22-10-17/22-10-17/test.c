#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int i, sum = 1;
    int sum1 = 0;
    int m, n = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        
        for (m=i; m > 0; m--)
        {
            
            sum = sum * m;
        }

        sum1 = sum + sum1;
        sum = 1;
    }
    printf("%d", sum1);
    return 0;
}