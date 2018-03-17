#include <stdio.h>

/* 统计各个数字、空白符及其他字符出现的次数 */
main () 
{
    int c, i, nwhite, nother;
    int ndigit[10];

    /* init value */
    nwhite = nother = 0;
    for (i = 0; i < 10; ++ i)
        ndigit[i] = 0;  /* index is a digit, value is count of the digit */

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9')
            ++ ndigit[c - '0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++ nwhite;
        else
            ++ nother;
    }
    
    printf("digits = ");
    for (i = 0; i < 10; ++ i)
        printf(" %d", ndigit[i]);
    printf(", white space = %d, other = %d\n",
        nwhite, nother);
}