#include <stdio.h>

#define MAXLINE 1000

int get_line(char lien[], int max);
int append_line(char to[], char from[], int index);

int main ()
{
    int len;                // 当前行长度
    int resultlen;          // result 的长度
    int index;              // 数组下标
    char line[MAXLINE];     // 当前行
    char result[MAXLINE];   // 长度 >80 的所有行

    len = resultlen = 0;
    while ((len = get_line(line, MAXLINE)) > 0) {
        if (len > 80) {
            index = resultlen;
            if ((resultlen += len) >= MAXLINE - 1) // 判断数组是否溢出
                break;
            append_line(result, line, index);
        }
    }
    if (resultlen > 0)
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