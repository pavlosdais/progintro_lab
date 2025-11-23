#include <stdio.h>

int main()
{
    unsigned long long n;
    int length = 1;

    scanf("%llu", &n);

    while (n != 1)
    {
        if (n % 2 == 0)
            n = n / 2;
        else
            n = 3 * n + 1;
        length++;
    }

    printf("%d\n", length);

    return 0;
}