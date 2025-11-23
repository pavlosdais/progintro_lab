#include <stdio.h>

int length = 1;

void collatz_rec(int n)
{
    if (n == 1) return;

    length++;

    if (n%2==0) collatz_rec(n/2);
    else collatz_rec(3*n+1);
} 

int main()
{
    unsigned long long n;

    scanf("%llu", &n);

    collatz_rec(n);


    printf("%d\n", length);

    return 0;
}