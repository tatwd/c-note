#include <stdio.h>
/* #include <conio.h> */

int main ()
{
    int c;

    while ((c = getchar()) != EOF) /* getch() */
    {
        if (c == '\t') {
            /*
            putchar('\\');
            putchar('t');
            */
            printf("\\t");
        } else if (c == '\b')
            printf("\\b");
        else if (c == '\\')
            printf("\\\\");
        else
            putchar(c);
    }

    return 0;
}
