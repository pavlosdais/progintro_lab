#include <stdio.h>

int fib_it(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    int first = 0, second = 1, fib_term;
    for (int i = 2; i <= n; i++)
    {
        fib_term = first + second;
        first = second;
        second = fib_term;
    }
    return second;
}

int main()
{
    int terms;

    for (int i = 0; i < 100; i++) {
        printf("fib(%d) = %d\n", i, fib_it(i));
    }
    return 0;
}