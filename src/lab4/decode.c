#include <stdio.h>

int ascii_to_num(int ch1)
{
    if('a' <= ch1 && ch1 <= 'f') return ch1 - 'a' + 10;
    if('A' <= ch1 && ch1 <= 'F') return ch1 - 'A' + 10;

    return ch1 - '0';
}

int get_ch(int ch1, int ch2)
{
    return 16*ascii_to_num(ch1) + ascii_to_num(ch2);
}

int main(void)
{
    int ch;
    int ch2;
    while((ch = getchar()) != EOF) {
        ch2 = getchar();

        if(ch2 == EOF) {
            break;
        }
        putchar(get_ch(ch, ch2));    
    }

    return 0;
}