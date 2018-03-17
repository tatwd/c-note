#include <stdio.h>

int main () 
{
    int c;
    int nspace = 0, ntab = 0, nline = 0;

    while ((c = getchar() != EOF))
    {
        if (c == ' ')
            ++ nspace;
        
        if (c == '\t')
            ++ ntab;
        
        if (c == '\n')
            ++ nline;
    }
    printf("space: %d, tab: %d, new line: %d\n",
        nspace, ntab, nline);

    return 0;
}