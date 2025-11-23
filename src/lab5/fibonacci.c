#include <stdio.h>

int calls = 0;

int fib(int n)
{
    calls++;
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int terms;

    scanf("%d", &terms);
    for (int i = 0; i < terms; i++)
        printf("fib(%d) = %d\n", i, fib(i));
    
    printf("Total recursive calls: %d\n", calls);
    return 0;
}