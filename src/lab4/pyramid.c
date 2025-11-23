#include <stdio.h>

#define N 10

int main(void)
{
    for (int i = 1; i <= N; i++)
    {
        for (int j = 0; j < i; j++)
            putchar('*');

        putchar('\n');
    }
    return 0;
}