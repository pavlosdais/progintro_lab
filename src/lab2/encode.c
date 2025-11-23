#include <stdio.h>

int main(void)
{
    char ch;

    while((ch = getchar()) != EOF) {
        printf("%02x", ch);
    }

    return 0;
}
