/*
 * atoi 函数：将字符串 s 转化为对应的整型数
 * e.g. "12345" => 12345
 */
int atoi(char s[])
{
    int i, n;

    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i] - '0');
    return n;
}

/*
 * lower 函数：将字符 c 转化成小写形式；只对 ASCII 字符集有效
 * e.g. 'A' => 'a'
 */
int lower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';  /* or c + 32 */
    else
        return c;

    /* return (c >= 'A' && c <= 'Z') ? c + 'a' - 'A' : c; */
}
