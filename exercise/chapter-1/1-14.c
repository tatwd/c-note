#include <stdio.h>

#define IN  1    // 单词内
#define OUT 0    // 单词外
#define N   256  // 数组的长度

int main () 
{
    int c, i;
    int nc[N];
    
    for (i = 0; i < N; ++ i)
        nc[i] = 0;

    while ((c = getchar()) != EOF) {
        ++ nc[c];
    }


    for (i = 0; i < N; ++ i) {
        if (nc[i] != 0) {
            if (i == '\n')
                printf("\'\\n\': %d\n", nc[i]);
            else if (i == ' ')
                printf("\' \': %d\n", nc[i]);
            else if (i == '\t')
                printf("\'\\t\': %d\n", nc[i]);
            else
                printf("\'%c\': %d\n", i, nc[i]);
        }
    }

    return 0;
}