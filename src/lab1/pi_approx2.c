#include <stdio.h>
#include <math.h>

#define MAX_N 10000

int main(void)
{
    float sum = 0, term;

    int i = 1;
    do
    {
        term = 1/((float)i*i);
        sum += term;
        i++;
    }
    while(term > 1e-15);

    float result = sqrt(6*sum);

    printf("%.8f\n", result);

    return 0;
}