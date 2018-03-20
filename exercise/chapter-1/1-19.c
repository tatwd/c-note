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
    int i, len;
    char reve[N];

    /**
     * copy `s` to `reve` and get length of `s`
     */
    i = len = 0;
    while ((reve[len] = s[len]) != '\0')
        ++len;
    
    /** 
     * reverse 
     */
    while (i < len) {
        s[i] = reve[len - i - 1];
        ++i;
    }

    /* can also use dichotomy*/
}