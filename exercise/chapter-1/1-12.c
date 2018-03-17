#include <stdio.h>

int main () 
{
    int c, ctmp;

    ctmp = 0;
    while ((c = getchar()) != EOF) {
        
        if (c == ' ' || c == '\t' || c == '\n') {
            if (ctmp != '\n')
                c = '\n';
            else
                continue;
        }
        
        putchar(c);
        ctmp = c;
    }

    return 0;
}