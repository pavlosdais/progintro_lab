// https://cgi.di.uoa.gr/~ip/2021/iphw2122_1.pdf

#include <stdio.h>
#include <stdbool.h> 

#define MAXNUM 100000

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

int get_num_length(int i) {
    int ndigits = 1;
    int tempn = i;

    while (tempn > 9) {
        ndigits++;
        tempn /= 10;
    }
    return ndigits;
}

int count_children_of_length_l(int n, int ndigits, int l, int pow10) {
    int tempn = n;
    int child_count = 0;

    int j = 1;
    while (j <= ndigits - l + 1 && child_count < 2) {
        int subseq = tempn % pow10;
        tempn /= 10;
        if (subseq % ndigits == 0) {
            child_count++;
        }
        j++;
    }
    return child_count;
}

bool is_one_child(int n) {

    int ndigits = get_num_length(n);

    int child_count = 0;
    int pow10 = 1;

    // exits loop if children are 2 or more because we only care about the number being only child
    int length = 1;
    while (length <= ndigits && child_count < 2) {
        pow10 *= 10;
        
        child_count += count_children_of_length_l(n, ndigits, length, pow10);
        
        length++;
    }

    return child_count == 1;
}


int main() {
    int one_child_count = 0;
    int abund_count = 0;
    int both_count = 0;

    printf("Numbers both one-child and abundant:\n");

    for (int i = 1; i <= MAXNUM; i++) {

        bool abund_bool     = false; 
        bool one_child_bool = false; 

        if (is_abundant(i)) {
            abund_count++;
            abund_bool = true; 
        }

        if (is_one_child(i)) {
            one_child_count++;
            one_child_bool = true; 
        }

        if (abund_bool && one_child_bool) {
            printf("%d ", i);
            both_count++;
        }
    }

    printf("\nFound %d one-child numbers", one_child_count);
    printf("\nFound %d abundant numbers", abund_count);
    printf("\nFound %d numbers in both classes\n", both_count);
    
    return 0;
}
