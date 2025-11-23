#include <stdio.h>

int is_prime(int num)
{
    for (int i = 2; i*i <= num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main(void)
{
    int prime_count = 1;
    for (int i = 3; i < 1000000; i++)
    {
        if (is_prime(i))
        {
            printf("%d ", i);
            prime_count++;
        }
    }

    printf("\n%d prime numbers\n", prime_count);

    return 0;
}