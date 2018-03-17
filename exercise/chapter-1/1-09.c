#include <stdio.h>

int main () 
{
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
    
    return 0;
}