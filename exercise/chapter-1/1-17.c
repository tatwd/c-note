#include <stdio.h>

#define MAXLINE 1000

int get_line(char lien[], int max);
int append_line(char to[], char from[], int index);

int main ()
{
    int len;                // 当前行长度
    int arrlen;             // result 的长度
    char line[MAXLINE];     // 当前行
    char result[MAXLINE];   // 长度 >80 的所有行

    len = arrlen = 0;
    while ((len = get_line(line, MAXLINE)) > 0) {
        if (len > 80)
            append_line(result, line, arrlen);
        arrlen += len;
        if (arrlen >= MAXLINE - 1)
            break;
    }
    
    if (arrlen > 0)
        printf("result:\n%s", result);

    return 0;
}

// 获取当前行 line 并返回当前行的长度
int get_line(char line[], int max)
{
    int c, i;

    for (i = 0; i < max -1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n') {
        line[i] = '\n';
        ++i;
    }
    line[i] = '\0';

    return i;
}

// 从 to 的 index 处开始复制 form
int append_line(char to[], char from[], int index)
{
    int i;

    i = 0;
    while ((to[index] = from[i]) != '\0') {
        ++i;
        ++index;
    }
}