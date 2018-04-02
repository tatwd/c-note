#include <stdio.h>

void escape(char s[], char t[]);
void unescape(char s[], char t[]);

int main()
{
    char s[10];
    char t[10] = "hello\nleo";

    escape(s, t);
    printf("escape=>%s\n", s);

    unescape(s, t);
    printf("unescape=>%s\n", s);

    return 0;
}

/**
 * copy s to t and escape space chars
 */
void escape(char s[], char t[])
{
    int i, j;

    i = j = 0;
    while (t[i] != '\0') {
        switch(t[i]) {
        case '\n':
            s[j++] = '\\';
            s[j++] = 'n';
            break;
        case '\t':
            s[j++] = '\\';
            s[j++] = 't';
            break;
        default:
            s[j++] = t[i];
            break;
        }
        ++i;
    }
    s[j] = '\0';
}

/**
 * unescape space chars
 */
void unescape(char s[], char t[])
{
    int i, j;

    i = j = 0;
    while (t[i] != '\0') {
        if (t[i] == '\\') {
            switch(t[i++]) {
            case 'n':
                s[j++] = '\n';
                break;
            case '\t':
                s[j++] = '\t';
                break;
            default:
                s[j++] = '\\';
                s[j++] = t[i];
                break;
            }
        } else {
            s[j++] = t[i];
        }
        ++i;
    }
    s[j] = '\0';
}
