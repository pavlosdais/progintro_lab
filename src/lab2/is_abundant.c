#include <stdio.h>
#include <stdbool.h>

#define MAXNUM 100000

bool is_abundant(int n);

int main(void)
{
    int prime_count = 0;
    for (int i = 2; i <= MAXNUM; i++)
    {
        if (is_abundant(i)) {
            printf("%d ", i);
            prime_count++;
        }
    }
    printf("\nFound %d abundant numbers\n", prime_count);
    return 0;
}

bool is_abundant(int n) {
    int i, sum_divisors = 0;
    for (i = 2; i*i < n; i++)
    {
        if (n % i == 0)
        {
            sum_divisors += i;
            sum_divisors += n/i;
        }
    }

    if (i * i == n) sum_divisors+=i;
    
    bool is_abundant = sum_divisors > n; 
    return is_abundant;
}