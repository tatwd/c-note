#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);

int main()
{
    unsigned int x, y;
    // printf("%d %d", (a >> 2 << 2) | a, (a >> 2) & (~0 << 1));
    x = 7;
    y = 10;

    x = setbits(x, 2, 3, y);
    printf("x=%d\n", x);

    return 0;
}

/*
 * i.e.  x = 16, p = 2, n = 3, y = 10
 *       0001 0000    0000 1010
 *       000x xx00    0000 1xxx 
 *    => 0000 1000     
 */
unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    /* 最右边的一位是第 0 位 */
    unsigned int tmp = x;
    y = y | (~0 << n); /* 第 n 位的值移到最右边 */
    x = x >> p;

    printf("%d\n", 0 | tmp);

    return ((x & y) << p) | tmp;
}