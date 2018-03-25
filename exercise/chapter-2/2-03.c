#include <stdio.h>
#include <math.h>

#define MAX 100

int lower(char s[]);
int htoi(char s[]);

int main()
{
    int num;
    char s[MAX] = "0X123F";

    num = htoi(s);
    printf("result => %d", num);

    return 0;
}

/*
 * string to lower and get its length
 */
int lower(char s[])
{
    int i;
    for (i = 0; s[i] != '\0'; ++i)
        s[i] = (s[i] >= 'A' && s[i] <= 'Z')
            ? s[i] + 'a' - 'A'
            : s[i];
    return i;
}

/*
 * hexadecimal num to integer
 */
int htoi(char s[])
{
    int num;
    int len;
    int i;

    num = 0;
    len = lower(s);

    len = s[len - 1] == '\n' ? len - 1 : len;  /* end with '\n' */

    for (i = len - 1; i >= 0; --i) {
        if (s[i] >= '0' && s[i] <= '9')
            num += (s[i] - '0') * pow(16, (len - i - 1));
        else if (s[i] >= 'a' && s[i] <= 'f')
            num += (s[i] - ('a' - 10)) * pow(16, (len - i - 1));
        else if (s[i] == 'x')
            break;
    }

    return num;
}
