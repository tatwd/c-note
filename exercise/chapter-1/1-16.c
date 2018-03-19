#include <stdio.h>

#define MAXLINE 1000    /* 最大行数 */

int get_line(char line[], int maxline); // stdio.h has already declared `getline`
void copy(char to[], char from[]);

int main ()
{
    int len;    /* 当前行的长度 */
    int max;    /* 当前最大行的长度 */
    char line[MAXLINE];     /* 当前行 */
    char longest[MAXLINE];  /* 最长行 */

    max = 0;
    while ((len = get_line(line, MAXLINE)) > 0) {
        /*if (len > max) {
            max = len;
            copy(longest, line);
        }*/
        copy(longest, line);
        printf("length: %d current line: %s", len, longest);
    }
    /* if (max > 0)
        printf("%s", longest); */

    return 0;
}

/* 读取一行字符存入 s 并返回其长度 */
int get_line(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++ i)
        s[i] = c;
    
    if (c == '\n') {
        s[i] = c;
        ++ i;
    }
    s[i] = '\0';

    return i;
}

/* 将 from 复制到 to */
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++ i;
}