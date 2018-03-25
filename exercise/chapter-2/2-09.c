#include <stdio.h>

int bitcount(unsigned x);

int main()
{
    unsigned int x;
    int count;

    x = 12; /* 01100 */

    count = bitcount(x);
    printf("%d\n", count); /* 2 */

    return 0;
}

/*
 * 统计 x 中值为 1 的二进制位数
 */
int bitcount(unsigned x)
{
    int b;

    for (b = 0; x != 0; b++)
        x &= (x - 1);
    return b;
}
