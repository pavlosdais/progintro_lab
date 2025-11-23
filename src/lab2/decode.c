#include <stdio.h>

char get_hexadecimal_char(char ch1)
{
    if(ch1 >= 'a' && ch1 <= 'f')
        return ch1 - 'a' + 10;

    if(ch1 >= 'A' && ch1 <= 'F')
        return ch1 - 'A' + 10;

    return ch1 - '0';
}

int main(void)
{
    int ch;

    while((ch = getchar()) != EOF) {
        int ch2;
        ch2 = getchar(); 
        if(ch2 == EOF) 
            printf("ERROR\n");


        int c = get_hexadecimal_char(ch2) + 16*get_hexadecimal_char(ch);

        putchar(c);
    }

    return 0;
}
