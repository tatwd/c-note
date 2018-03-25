#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);

int main()
{
    unsigned int x, y;
    int p, n;

    x = 16;
    y = 10;
    p = 2;
    n = 3;

    x = setbits(x, p, n, y);
    printf("%d\n", x);

    return 0;
}

/*
 * 此函数将二进制位最右边的第一位看作第 0 位
 */
unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    /* i.e.
     * x = 7, p = 2, n = 3, y = 10
     *
     * => x = 0000 0111
     *    y = 0000 1010
     *
     * => x & (~0 << (n+p))     => 0000 0000
     * => (y & ~(~0 << n)) << p => 0000 1000
     * => x & ~(~0 << p)        => 0000 0011
     * => 0000 1011
     *
     * so returns 11
     *
     */
    return (x & (~0 << (n+p))) | ((y & ~(~0 << n)) << p) | (x & ~(~0 << p));
}
