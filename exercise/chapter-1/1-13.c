#include <stdio.h>

#define IN  1   /* 单词内 */
#define OUT 0   /* 单词外 */
#define N   50  /* 数组的长度 */

int main () 
{
    int c, nword, state, i;
    int wlen[N];
    
    c = nword = 0;
    state = OUT;
    for (i = 0; i < N; ++ i)
        wlen[i] = 0;

    /*
     * get length
     */
    while ((c = getchar()) != EOF) {
        if (c < 'A' || (c > 'Z' && c < 'a') || c > 'z')
           state = OUT;
        else if (state == OUT) {
            state = IN;
            ++ nword;
        } 
        
        if (state == IN)
            ++ wlen[nword - 1];
    }

    /* 
     * print result
     */
    printf("nword: %d\nword length:\n", nword);
    for (i = 0; i < nword; ++ i) 
        printf("%d ", wlen[i]);

    printf("\n");
    for (i = 0; i < nword; ++ i) 
        printf("%d\n", wlen[i]);

    return 0;
}