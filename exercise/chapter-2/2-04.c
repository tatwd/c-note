#include <stdio.h>

void squeeze(char s1[], char s2[]);

int main()
{
    char s1[10] = "helloleo";
    char s2[10] = "eo";

    squeeze(s1, s2);
    printf("%s", s1);

    return 0;
}

void squeeze(char s1[], char s2[])
{
    int i, j, k, flg;

    for (i = j = 0; s1[i] != '\0'; ++i) {
        flg = k = 0;
        while (s2[k] != '\0') {
            if (s1[i] == s2[k++]) {
                flg = 1;
                break;
            }
        }
        if (!flg)
            s1[j++] = s1[i];
    }
    s1[j] = '\0';
}