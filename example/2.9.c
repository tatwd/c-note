#include <stdio.h>

unsigned getbits(unsigned x, int p, int n);

main()
{
    unsigned int x;

    x = 12; /* 01100 */

    x = getbits(x, 3, 2); /* 3 <= 011 */
    printf("%d\n", x);

    return 0;
}

/*
 * 返回 x 中从第 p 位开始向右数 n 位
 * 最右边一位为第 0 位
 */
unsigned getbits(unsigned x, int p, int n)
{
    return (x >> (p+1-n)) & ~(~0 << n);
}
