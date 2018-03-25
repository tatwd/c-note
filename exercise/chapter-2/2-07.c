#include <stdio.h>

unsigned invert(unsigned x, int p, int n);

int main()
{
    unsigned int x;
    int p, n;

    x = 22;
    p = 1;
    n = 2;

    x = invert(x, p, n);
    printf("%d", x);

    return 0;
}

/*
 * 此函数将二进制位最右边的第一位看作第 0 位
 */
unsigned invert(unsigned x, int p, int n)
{
    // return ((x >> p & ~0 << n) | ~((x >> p) | (~0 << n))) << p | (x & ~(~0 << p));
    return (x & ~0 << (n+p)) & ~(x & ~(~0 << (n+p))) | (x & ~(~0 << p));
}
