#include <stdio.h>

int main()
{
    int i, num1 = 0, num2 = 1, res;
    printf("%d  ", num2);
    for (i = 0; i < 15; i++)
    {
        res = num1 + num2;
        printf("%d  ", res);
        num1 = num2;
        num2 = res;
    }
}