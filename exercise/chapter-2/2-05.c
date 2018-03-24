#include <stdio.h>

int any(char s1[], char s2[]);

int main()
{
    int index;
    char s1[10] = "hello";
    char s2[10] = "le";

    index = any(s1, s2);
    printf("%d", index);

    return 0;
}

/*
 * get the index that any char of s1 appears in s1 firstly
 * i.e. s1 = "hello", s2 = "le" => index = 1
 */
int any(char s1[], char s2[])
{
    int index;
    int i, j;

    index = -1;
    for (i = 0; s1[i] != '\0'; ++i) {
        j = 0;
        while (s2[j] != '\0') {
            if (s1[i] == s2[j++]) {
                index = i;
                break;
            }
        }
        if (index >= 0)
            break;
    }

    return index;
}