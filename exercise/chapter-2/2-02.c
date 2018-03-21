#include <stdio.h>

#define MAX 1000

int main()
{
    int c, i, lim;
    char s[MAX];
    
    lim = MAX;
    /* for (i=0; i<=lim-1 && (c=getchar()) != '\n' && c != EOF; ++i) */
    for (i=0; (i<=lim-1) + ((c=getchar()) != '\n') + (c != EOF) == 3; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';

    printf("=>%s", s);

    return 0;
}