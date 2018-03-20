#include <stdio.h>

#define MAX 100
#define N 5 /* 每隔 5 列出现一次制表符终止位 */

void copy(char to[], char from[]);
void detab(char s[]);

int main()
{

    return 0;
}

void copy(char to[], char from[])
{
    int i = 0;
    while ((to[i] = from[i]) != '\0')
        ++ i;
}

/*
 * translate tab with `n` space
 */
void detab(char s[])
{
    int i, pos, n;
    char cp[MAX];

    copy(cp, s);
    pos = n = 0;
    for (i = 0; i < MAX - 1 && cp[i] != '\0', ++i) {
        pos = pos % N;
        
        if (cp[i] == '\t' && i != 0) {
            while (( n = (N - pos)) > 0) {
                i = i + n - 1;
                s[i] = ' ';
                n--;
            }
            pos = 0;
        } else {
            s[i] = cp[i];
            ++pos;
        }
    }
}