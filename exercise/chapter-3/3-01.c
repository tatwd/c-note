#include <stdio.h>

int binsearch(int x, int v[], int n);

int main()
{
    int index;
    int v[10] = { 1, 2, 3, 4, 5, 6 };

    index = binsearch(3, v, 6);
    printf("%d\n", index);

    return 0;
}

/*
 * 折半查找：在 v[0] <= v[1] <= v[2] <= ... <= v[n-1] 中查找
 */
int binsearch(int x, int v[], int n)
{
    int low, high, mid;

    low = 0;
    high = n - 1;
    mid = (low + high) / 2;

    /* 循环内部只执行了一次测试 */
    while (low < high && x != v[mid]) {
        if (x < v[mid])
            high = mid - 1;
        else
            low = mid + 1;
        mid = (low + high) / 2;
    }
    if (x == v[mid])
        return mid;  /* 找到匹配项 */
    else
        return -1;  /* 未找到匹配项 */
}
