#include <stdio.h>

int main () 
{
    /*
    int c, ctmp;
    
    c = getchar();
    while (c != EOF)
    {
        ctmp = getchar();

        if (c == ' ' && c == ctmp)
            continue;
            
        putchar(c);
        c = ctmp;
    }
    */

    /*
     * 改进版
     */
    int c, ctmp;
    
    ctmp = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ' && c == ctmp)
            continue;
            
        putchar(c);
        ctmp = c;
    }

    
    return 0;
}