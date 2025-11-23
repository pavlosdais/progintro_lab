#include <stdio.h>
#include <math.h>

#define MAXNUM 1000

int get_num_length(int i) {
    int ndigits = 1;
    int tempn = i;

    while (tempn > 9) {
        ndigits++;
        tempn /= 10;
    }
    return ndigits;
}

void print_sliding_window(int n, int num_len, int pow10, int l)
{
    printf("\t");
    for(int i = 1; i <= num_len - l + 1; i++) {
        int term = n % pow10;
        printf("%d ", term);
        n /= 10;
    }
    printf("\n");
}

void print_children(int n)
{
    int pow10 = 10;
    int num_len = get_num_length(n);
    for(int i = 1; i <= num_len; i++) {
        printf("  length %d:\n", i);
        print_sliding_window(n, num_len, pow10, i);
        pow10 *= 10;
    }
}

int main(void)
{
    print_children(1401014);
    return 0;
}