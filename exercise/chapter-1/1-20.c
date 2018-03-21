#include <stdio.h>

#define MAX 100
#define N 5 /* 每隔 5 列出现一次制表符终止位 */

int get_line(char s[], int max);
void copy(char to[], char from[]);
void detab(char s[]);

int main()
{
    int c, i;
    char s[MAX];

    while (get_line(s, MAX) > 0) {
        detab(s);
        printf("=>%s", s);
    }

    return 0;
}

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

void copy(char to[], char from[])
{
    int i = 0;
    while ((to[i] = from[i]) != '\0')
        ++ i;
}

/*
 * translate tab with some space
 */
void detab(char s[])
{
    int i, j, pos, n;
    char cp[MAX];

    copy(cp, s);

    pos = n = 0;
    for (i = j = 0; i < MAX - 1 && cp[i] != '\0'; ++i) {
        pos = i % N;
        if (cp[i] == '\t' && pos != 0) {
            n = N - pos;
            while (j - i < n)
                s[j++] = '*'; /* add space */
        } else {
            s[j] = cp[i];
            ++j;
        }
    }
    s[j] = '\0';
}