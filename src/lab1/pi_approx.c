#include <stdio.h>
#include <math.h>

#define MAX_N 10000

int main(void)
{
    float sum = 0;

    for(int i = 1; i < MAX_N; i++) {
        sum += 1/((float)i*i);
    }

    float result = sqrt(6*sum);

    printf("%.8f\n", result);

    return 0;
}