#include <stdio.h>

int max_arr(int* A, int n)
{
    int max_element = A[0];

    for (int i = 0; i < n; i++)
    {
        if (max_element < A[i])
            max_element = A[i]
    }
    return max_element;
}

int main(void)
{
    int A[N];

    for (int i = 0; i < N; i++)
    {
        A[i] = i*i;
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    return 0;
}