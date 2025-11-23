#include <stdio.h>
#include <math.h>

#define MAX_N 101

int main(void)
{
    float sum = 0;
    int sign = 1;

    for(int i = 1; i < MAX_N; i++) {
        sum += sign * 1/((float)i*i);
        sign *= -1;
    }

    printf("%.8f\n", sum);

    return 0;
}