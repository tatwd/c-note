#include <stdio.h>

#define N 100

int get_line(char s[], int max);
void reverse(char s[]);

int main()
{
    int c;
    char s[N];

    while (get_line(s, N) > 0) {
        reverse(s);
        printf("reverse: %s\n", s);
    }

    return 0;
}

/**
 * get current line string
 */
int get_line(char s[], int max)
{
    int c, i;

    for (i = 0; i < max - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/**
 * 将字符串 s 的字符顺序颠倒
 * e.g. "hello\n\0" => "\nolleh\0"
 */
void reverse(char s[])
{
    int i, j, len;
    char c;

    /* get length of `s` without strlen func */
    len = 0;
    while (s[len] != '\0')
        ++len;

    for (i = 0, j = len - 1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}
