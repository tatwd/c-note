#include <stdio.h>

#define N 100

int main()
{
    int c, i, n, nline;
    char s[N];

    n = nline = 0;
    for (i = 0; i < N - 1 && (c = getchar()) != EOF; ++i) {
        if (c == '\t' || c == ' ') {
            ++n;
            continue;
        }
        if (c == '\n')
            ++nline;
        s[i - n] = c;
    }
    s[i - n] = '\0';
    printf("nline: %d\nresult:\n%s", nline, s);

    return 0;
}
