#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));

    float a = rand()/(float)RAND_MAX;
    float b = rand()/(float)RAND_MAX;
    float c = rand()/(float)RAND_MAX;

    float d = b*b - 4*a*c;

 
    printf("(%f)x^2 + (%f)x + (%f)\n", a, b, c);
    if(d < 0) {
        
        printf("x_1 = (%f + i(%f))/%f , x_2 = (%f - i(%f))/%f\n", -b, sqrt(-d), 2*a, -b, sqrt(-d), 2*a);
    }
    else if(d > 0) {
        float x_1 = (-b + sqrt(d))/2*a;
        float x_2 = (-b - sqrt(d))/2*a;

        printf("x_1 = %.4f, x_2 = %.4f\n", x_1, x_2);
    }
    else if(d == 0) {
        float x = (-b)/2*a;

        printf("x_1, x_2 = %.4f\n", x);
    }



    return 0;
}