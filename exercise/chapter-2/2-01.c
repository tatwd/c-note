#include <stdio.h>
#include <limits.h>

void std_tlimit();
void calc_tlimit();

int main()
{
    std_tlimit();
    calc_tlimit();

    return 0;
}

/**
 * get limits of types using `limits.h`
 */
void std_tlimit()
{
    printf("====From limits.h====\n");

    // char
    printf(
        "signed char: %d ~ %d\n"
        "unsigned char: %u ~ %u\n",
        CHAR_MIN, CHAR_MAX,
        0, UCHAR_MAX
    );

    // short
    printf(
        "signed short: %d ~ %d\n"
        "unsigned short: %u ~ %u\n",
        SHRT_MIN, SHRT_MAX,
        0, USHRT_MAX
    );

    // int
    printf(
        "signed int: %d ~ %d\n"
        "unsigned int: %u ~ %u\n",
        INT_MIN, INT_MAX,
        0, UINT_MAX
    );

    // long
    printf(
        "signed long: %d ~ %d\n"
        "unsigned long: %u ~ %u\n",
        LONG_MIN, LONG_MAX,
        0, ULONG_MAX
    );
}

/**
 * calc value of type's limits
 */
void calc_tlimit()
{
    /*
     * 利用位运算
     * ~0 得到全 1 的数 右移（>>）一位得到最大值
     * 最大值的相反数 - 1 得到最小值
     */

    printf("====Calc Type's limits====\n");

    // char
    printf(
        "signed char: %d ~ %d\n"
        "unsigned char: %u ~ %u\n", 
        -(char)((unsigned char)~0 >> 1) - 1, 
        (char)((unsigned char)~0 >> 1),
        0, (unsigned char)~0
    );

    // short
    printf(
        "signed short: %d ~ %d\n"
        "unsigned short: %u ~ %u\n", 
        -(short)((unsigned short)~0 >> 1) - 1, 
        (short)((unsigned short)~0 >> 1),
        0, (unsigned short)~0
    );

    // int
    printf(
        "signed int: %d ~ %d\n"
        "unsigned int: %u ~ %u\n", 
        -(int)((unsigned int)~0 >> 1) - 1, 
        (int)((unsigned int)~0 >> 1),
        0, (unsigned int)~0
    );

    // long
    printf(
        "signed long: %d ~ %d\n"
        "unsigned long: %u ~ %u\n", 
        -(long)((unsigned long)~0 >> 1) - 1, 
        (long)((unsigned long)~0 >> 1),
        0, (unsigned long)~0
    );
}