#include <stdio.h>

unsigned rightrot(unsigned x, int n);

int main()
{
    unsigned int x;
    int n;

    x = 19;  /* ‭‭00010011‬ */
    n = 3;

    x = rightrot(x, n);
    printf("%d\n", x);  /* 1610612738 => ‭01100000000000000000000000000010‬ */

    return 0;
}
/*
 * right out and left in
 * i.e. x = 010011, n = 3 => x = 011010 (when 6 bit)
 */
unsigned rightrot(unsigned x, int n)
{
    while(n-- > 0) {
        x = (x & 01)
            ? (x >> 1) | ~(~0u >> 1)
            : (x >> 1) & (~0u >> 1);
    }
    return x;
}