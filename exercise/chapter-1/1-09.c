#include <stdio.h>

int main () 
{
    int c;
    // int ctmp;

    while ((c = getchar() != EOF))
    {
        // ctmp = c;
        // putchar(ctmp);
        // c = getchar();

        // if (c == ctmp && ctmp == ' ')
        //     c = 0; // 空字符

        putchar(c);
        
        if (getchar() == c && getchar() == ' ')
            c = 0;
        else
            c = getchar();

    }
    
    return 0;
}