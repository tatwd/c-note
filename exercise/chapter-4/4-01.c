#include <stdio.h>

int strrindex(char s[], char t[]);

int main()
{
    char s[10] = "helloworld";
    char t[5] = "ello";
    int index;

    index = strrindex(s, t);
    printf("%d\n", index);  /* 4 */

    return 0;
}

/*
 * get right index that t in s
 */
int strrindex(char s[], char t[])
{
    int i, j, k;

    for (i = 0; s[i] != '\0'; i++) {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
            ;
        if (k >= 0 && t[k] == '\0')
            return i + k - 1;
    }

    return -1;
}
